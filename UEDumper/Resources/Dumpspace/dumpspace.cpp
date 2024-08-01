#include "dumpspace.h"


#include <fstream>

#include "Engine/Core/Core.h"
#include "Memory/memory.h"
#include "Settings/EngineSettings.h"

namespace Dumpspace
{
    std::string dumpTimeStamp = {};
    constexpr auto version = 10202;

    // Last std::string isn't used atm, but dumps.host expects it.
    std::vector<std::pair<std::string, uintptr_t>> offsets = {};
    void AddOffset(const std::string& string, uint64_t offset) {
        offsets.push_back(std::pair(string, offset));
    }

    nlohmann::json classes = nlohmann::json::array();
    void AddClass(const nlohmann::json& json) {
        classes.push_back(json);
    }

    nlohmann::json functions = nlohmann::json::array();
    void AddFunction(const nlohmann::json& json) {
        functions.push_back(json);
    }

    nlohmann::json structs = nlohmann::json::array();
    void AddStruct(const nlohmann::json& json) {
        structs.push_back(json);
    }

    nlohmann::json enums = nlohmann::json::array();
    void AddEnum(const nlohmann::json& json) {
        enums.push_back(json);
    }

    void DumpOffsets(const std::filesystem::path& directory) {
        nlohmann::json j;
        j["updated_at"] = dumpTimeStamp;
        j["version"] = version;
        j["data"] = nlohmann::json(offsets);

        nlohmann::json credit;
        credit["dumper_used"] = "UEDumper";
        credit["dumper_link"] = "https://github.com/Spuckwaffel/UEDumper";
        j["credit"] = credit;

        std::ofstream file(directory / "OffsetsInfo.json");
        file << j.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);
    }

    void DumpClasses(const std::filesystem::path& directory) {
        nlohmann::json j;
        j["updated_at"] = dumpTimeStamp;
        j["version"] = version;
        j["data"] = classes;

        std::ofstream file(directory / "ClassesInfo.json");
        file << j.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);
    }

    void DumpFunctions(const std::filesystem::path& directory) {
        nlohmann::json j;
        j["updated_at"] = dumpTimeStamp;
        j["version"] = version;
        j["data"] = functions;

        std::ofstream file(directory / "FunctionsInfo.json");
        file << j.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);
    }

    void DumpStructs(const std::filesystem::path& directory) {
        nlohmann::json j;
        j["updated_at"] = dumpTimeStamp;
        j["version"] = version;
        j["data"] = structs;

        std::ofstream file(directory / "StructsInfo.json");
        file << j.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);
    }

    void DumpEnums(const std::filesystem::path& directory) {
        nlohmann::json j;
        j["updated_at"] = dumpTimeStamp;
        j["version"] = version;
        j["data"] = enums;

        std::ofstream file(directory / "EnumsInfo.json");
        file << j.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);
    }

    void Dump(std::filesystem::path directory) {
        directory /= "Dumpspace";
        std::filesystem::create_directories(directory);

        dumpTimeStamp = std::to_string(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

        // Now we're ready to dump all our acquired information
        DumpOffsets(directory);
        DumpClasses(directory);
        DumpFunctions(directory);
        DumpStructs(directory);
        DumpEnums(directory);
    }

    void Generate(int& progressDone, int& totalProgress)
    {
        totalProgress = EngineCore::getOffsets().size() + EngineCore::getPackages().size();
        for (const auto& offset : EngineCore::getOffsets())
        {
            if (offset.flag & OFFSET_DS)
            {
                AddOffset(offset.name, EngineCore::getOffsetAddress(offset) - Memory::getBaseAddress());
            }
            progressDone++;
        }

        for (auto& pack : EngineCore::getPackages())
        {
            auto generateStructsOrClasses = [&](std::vector<EngineStructs::Struct> strucVec) mutable
            {
                for (auto& struc : strucVec)
                {
                    //if (struc.inherited)
                    //{
                    //    nlohmann::json j;
                    //    j[struc.cppName] = struc.supers[0]->cppName;
                    //    AddInheritInfo(j);
                    //}

                    nlohmann::json membersArray = nlohmann::json::array();

                    nlohmann::json inheritInfo = nlohmann::json::array();
                    if (struc.inherited)
                    {
                        for (auto& super : struc.supers)
                            inheritInfo.push_back(super->cppName);
                    }
                    nlohmann::json inheritInfoDesc;
                    inheritInfoDesc["__InheritInfo"] = inheritInfo;
                    membersArray.push_back(inheritInfoDesc);

                    nlohmann::json gSize;
                    gSize["__MDKClassSize"] = struc.size;
                    membersArray.push_back(gSize);

                    for (auto& member : struc.definedMembers)
                    {
                        if (member.missed)
                            continue;


                        nlohmann::json jmember;

                        //actually no need to use the typearray because bits are literally just unsigned chars or bools but we wanna keep the same style
                        if (member.isBit)
                            jmember[member.name] = std::make_tuple(member.type.jsonify(), member.offset, member.size, member.arrayDim,member.bitOffset);
                        else
                            jmember[member.name] = std::make_tuple(member.type.jsonify(), member.offset, member.size, member.arrayDim);
                        membersArray.push_back(jmember);
                    }
                    nlohmann::json j;

                    j[struc.cppName] = membersArray;

                    if (struc.isClass)
                        AddClass(j);
                    else
                        AddStruct(j);

                    if (struc.functions.size() > 0)
                    {
                        nlohmann::json functions = nlohmann::json::array();


                        for (auto& func : struc.functions)
                        {
                            nlohmann::json a;

                            nlohmann::json functionParams = nlohmann::json::array();

                            for (auto& param : func.params)
                            {
                                std::string functionParamType = "";
                                //if (std::get<3>(param) > 1)
                                //    functionParamType += "*";
                                if (std::get<2>(param) & EPropertyFlags::CPF_OutParm)
                                    functionParamType += "&";

                                functionParams.push_back(std::make_tuple(std::get<0>(param).jsonify(), functionParamType, std::get<1>(param)));


                            }
                            a[func.cppName] = std::make_tuple(func.returnType.jsonify(), functionParams, func.binaryOffset, func.functionFlags);
                            functions.push_back(a);
                        }
                        nlohmann::json f;

                        f[struc.cppName] = functions;
                        AddFunction(f);
                    }
                }
            };

            generateStructsOrClasses(pack.structs);
            generateStructsOrClasses(pack.classes);

            for (auto& enu : pack.enums)
            {
                nlohmann::json members = nlohmann::json::array();
                for (int i = 0; i < enu.members.size(); i++)
                {
                    nlohmann::json a;
                    a[enu.members[i].first] = enu.members[i].second;
                    members.push_back(a);
                }
                nlohmann::json j;
                j[enu.cppName] = std::make_tuple(members, enu.type);
                AddEnum(j);
            }
            progressDone++;
        }
        Dump(EngineSettings::getWorkingDirectory());
        progressDone = totalProgress;
    }
}