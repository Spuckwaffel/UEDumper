#include "SDK.h"


#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"
#include "packageSorter.h"

void SDKGeneration::printCredits(std::ofstream& stream)
{
    stream <<
        R"(
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

)";
}

void SDKGeneration::generateBasicType()
{
    std::ofstream BasicType(SDKPath / "BasicType.h");
    const auto& defs = basicDefinitions();
    auto noDefs = EngineCore::getAllUnknownTypes();
    for (const auto& [name, definition] : defs)
        if (auto it = std::ranges::find(noDefs, name); it != noDefs.end())
            noDefs.erase(it);

    printCredits(BasicType);
    BasicType << "/// This file contains all definitions of structs that werent defined automatically.\n\n";

    auto addIfCustom = [&](const char* base, const char* user)
    {
        if (strcmp(base, user) != 0)
        {
            BasicType << "typedef " << base << " " << user << ";\n";
        }
    };

    addIfCustom("bool", TYPE_BOOLEAN);
    addIfCustom("unsigned char", TYPE_UCHAR);
    addIfCustom("char", TYPE_CHAR);
    addIfCustom("uint8_t", TYPE_UI8);
    addIfCustom("uint16_t", TYPE_UI16);
    addIfCustom("uint32_t", TYPE_UI32);
    addIfCustom("uint64_t", TYPE_UI64);
    addIfCustom("int8_t", TYPE_I8);
    addIfCustom("int16_t", TYPE_I16);
    addIfCustom("int32_t", TYPE_I32);
    addIfCustom("int64_t", TYPE_I64);
    addIfCustom("float", TYPE_FLOAT);
    addIfCustom("double", TYPE_DOUBLE);

    BasicType << "\n\n";

    if (noDefs.size() > 0)
        BasicType << "///\n/// THERE ARE MISSING STRUCTS!! This will result in members having the SDK_UNDEFINED pragma!!!\n///\n\n";

    for (const auto& missingDef : noDefs)
    {
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_WARNING, "SDK GEN", "WARNING: SDK ERRORS WILL APPEAR!! Missing definition for struct %s!!!", missingDef.c_str());
        BasicType << "//TODO: Define " << missingDef << "!\n\n\n";
    }

    for (const auto& [name, definition] : defs)
    {
        BasicType << "/// Definition for " << name << "\n";
        BasicType << definition << "\n\n";
    }
    BasicType.close();
}


void SDKGeneration::generatePackage(std::ofstream& stream, const EngineStructs::Package& package)
{
    stream << "#pragma once\n";
    //flag some invalid characters in a name
    auto generateValidVarName = [](const std::string& str)
    {
        std::string result = "";
        for (const char c : str)
        {
            if (static_cast<int>(c) < 0 || !std::isalnum(c))
                result += '_';
            else
                result += c;

        }
        //guaranteed 0 termination
        return result;
    };

    for (auto& dependencies : package.dependencyPackages)
    {
        stream << "/// dependency: " << dependencies->packageName << std::endl;
    }

    stream << "\n";

    auto generateStruct = [&](const std::vector<EngineStructs::Struct*>& DataStruc)
    {
        for (const auto& struc : DataStruc)
        {
            if (std::ranges::find(allnames, generateValidVarName(struc->cppName)) != allnames.end())
                continue;
            allnames.push_back(generateValidVarName(struc->cppName));

            if (struc->isClass)
                stream << "/// Class " << struc->fullName << std::endl;
            else
                stream << "/// Struct " << struc->fullName << std::endl;
            char buf[100] = { 0 };
            sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc->size - struc->inheretedSize, struc->inheretedSize, struc->size);
            stream << "/// " << buf << std::endl;

            bool needsHelp = false;

            if (struc->cookedMembers.size() > 0)
            {
                if (struc->maxSize != struc->size)
                {
                    needsHelp = true;
                    stream << "#pragma pack(push, 0x1)" << std::endl;
                }
            }

            if (struc->isClass)
                stream << "class ";
            else
                stream << "struct ";

            if (needsHelp)
            {
                char buf1[100] = { 0 };
                sprintf_s(buf1, "alignas(0x%X) ", struc->minAlignment);
                stream << buf1;
            }

            stream << generateValidVarName(struc->cppName);

            if (struc->inherited && struc->isClass)
                stream << " : public " << generateValidVarName(struc->supers[0]->cppName);
            else if (struc->inherited)
                stream << " : " << generateValidVarName(struc->supers[0]->cppName);


            stream << "\n{ " << std::endl;

            if (struc->isClass)
                stream << "public:" << std::endl;

            std::vector<std::string> usedNames{ "float", "int", "bool", "double", "long", "char", "TRUE", "FALSE"};


            int j = 0;

            for (int i = 0; i < struc->cookedMembers.size(); i++)
            {
                const auto member = struc->getMemberForIndex(i);
                char finalBuf[600];
                char nameBuf[500];
                std::string name = member->name;

                if (std::isdigit(name[0]))
                    name = "_" + name;

                if (name.empty())
                    name = "noname";

                if (std::ranges::find(usedNames, name) != usedNames.end())
                    name += std::to_string(j++);



                usedNames.push_back(name);

                std::string memberType = member->type.stringify().c_str();

                if (member->type.clickable)
                {
                    bool anyUndef = !member->type.info || !member->type.info->valid;
                    if (!anyUndef && member->type.subTypes.size() > 0)
                    {
                        auto checkAllSubs = [&](const fieldType& type, auto& self) -> void
                        {
                            for (auto& sub : type.subTypes)
                            {
                                if (sub.clickable && (!sub.info || !sub.info->valid))
                                {
                                    anyUndef = true;
                                    break;
                                }
                                if (sub.propertyType == PropertyType::Unknown)
                                {
                                    anyUndef = true;
                                    break;
                                }
                                if (sub.subTypes.size() > 0)
                                    self(sub, self);
                            }
                        };
                        checkAllSubs(member->type, checkAllSubs);
                    }

                    if (anyUndef)
                    {
                        memberType = "SDK_UNDEFINED(" + std::to_string(member->size) + "," + std::to_string(undefinedCnt++) + ") /* " + memberType + " */";
                        name = "__um(" + member->name + ")";
                    }
                }



                if (member->isBit)
                    name += " : 1";
                sprintf_s(nameBuf, "%-50s %s;", memberType.c_str(), name.c_str());
                if (member->isBit)
                    sprintf_s(finalBuf, "	%-110s // 0x%04X:%d (0x%04X) ", nameBuf, member->offset, member->bitOffset, member->size);
                else
                    sprintf_s(finalBuf, "	%-110s // 0x%04X   (0x%04X) ", nameBuf, member->offset, member->size);
                stream << finalBuf << " "; // << static_cast<int>(member->type.propertyType);
                if (member->userEdited)
                    stream << "USER-MODIFIED";
                else if (member->missed)
                    stream << "MISSED";
                stream << std::endl;
            }

            // Add function section header
            if (!struc->functions.empty())
            {
                stream << "\n\n\t/// Functions" << std::endl;
            }

            for (const auto& func : struc->functions)
            {
                stream << "\t// Function " << func.fullName << std::endl;
                char funcBuf[1200];
                std::string params = "// " + func.returnType.stringify() + " " + func.cppName.c_str() + "(";
                for (auto param : func.params)
                {
                    params += std::get<0>(param).stringify();
                    if (std::get<3>(param) > 1)
                        params += "*";
                    else if (std::get<2>(param) & EPropertyFlags::CPF_OutParm)
                        params += "&";
                    params += " " + std::get<1>(param) + ", ";
                }
                if (func.params.size() > 0)
                    params = params.erase(params.size() - 2);
                params += ");";



                sprintf_s(funcBuf, "	%-120s // [0x%llx] %-20s ", params.c_str(), func.binaryOffset, func.functionFlags.c_str());
                stream << funcBuf << std::endl;
            }
            if (needsHelp)
            {
                stream << "};\n#pragma pack(pop)\n\n";
            }
            else stream << "};\n\n";


        }
    };

    //first we generate enums

    for (const auto& enu : package.enums)
    {
        stream << "/// Enum " << enu.fullName << std::endl;
        char buf[100] = { 0 };
        sprintf_s(buf, "Size: 0x%02d", enu.members.size());
        stream << "/// " << buf << std::endl;
        stream << "enum class " << enu.cppName << " : " << enu.type << std::endl;
        stream << "{" << std::endl;

        int j = 0;
        std::vector<std::string> usedNames{ "float", "int", "bool", "double", "long", "char"};

        for (const auto& member : enu.members)
        {
            j++;
            char memberBuf[300];

            std::string fir = member.first;

            if (std::ranges::find(usedNames, fir) != usedNames.end())
                fir += std::to_string(j);

            usedNames.push_back(fir);

            sprintf_s(memberBuf, "	%-80s = %d%s", fir.c_str(), member.second, j == enu.members.size() ? "" : ",");
            stream << memberBuf << std::endl;
        }
        stream << "};\n\n";
    }


    generateStruct(package.combinedStructsAndClasses);

}

SDKGeneration::SDKGeneration()
{
}

void SDKGeneration::Generate(int& progressDone, int& totalProgress)
{
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SDK GEN", "Baking SDK...");

    SDKPath = EngineSettings::getWorkingDirectory() / "SDK";
    if (!create_directories(SDKPath))
        remove_all(SDKPath);

    //the master header contains all the imports sorted
    std::ofstream masterHeader(SDKPath / "SDK.h");

    //yes, so all the SDK files are in path/to/stuff/SDK/SDK/
    //because i can imagine theres some stupid game that has a package called SDK and that would ruin our master file
    //so it will look like this
    /// path/to/shit/
    ///				-> SDK/
    ///					  -> SDK.h					// master header you will include
    ///					  -> SDK/					// folder with all the packages
    ///							-> Engine.h			//random package by the game
    ///							-> XGame.h			//random package by the game
    ///							-> CoreUObject.h	//random package by the game
    ///							...
    ///
    SDKPath = SDKPath / "SDK";
    if (!create_directories(SDKPath))
        remove_all(SDKPath);



    masterHeader <<
        R"(
/********************************************************
*                                                       *
*     SDK generated using UEDumper by Spuckwaffel.		*
*                                                       *
********************************************************/

/// Include this file into your project.
/// If there are still structs missing, read the Engine/Generation/BasicType file.
/// All manual defined structs are in BasicType.h

#include <string>

#define SDK_UNDEFINED(__ssize__, __cnt__, ...) char undefined##__cnt__[__ssize__]; //
#define __um(...) // x

)";

    std::vector<MergedPackage> newPackages;

    const auto soredPackages = sortPackages(progressDone, totalProgress, newPackages);


    puts("------sorted packages------");
    for (auto& pack : soredPackages)
    {
        printf("%s\n", pack->package.packageName.c_str());
    }
    puts("---------------------------");

    //generateBasicType();

    totalProgress = soredPackages.size();
    progressDone = 0;
    for (auto& pack : soredPackages)
    {
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SDK GEN", "Baking package %s", pack->package.packageName.c_str());
        masterHeader << "#include \"SDK/" + pack->package.packageName + ".h\"" << std::endl;
        if (pack->package.packageName == "BasicType")
            generateBasicType();
        else
        {
            std::string packageName = pack->package.packageName + ".h";
            std::ofstream package(SDKPath / packageName);
            printCredits(package);
            generatePackage(package, pack->package);
            package.close();
        }

        progressDone++;
    }
    masterHeader.close();
    progressDone = totalProgress;
}
