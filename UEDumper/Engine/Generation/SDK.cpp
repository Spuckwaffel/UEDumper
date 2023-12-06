#include "SDK.h"


#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"

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
        BasicType << "///\n/// THERE ARE MISSING STRUCTS!! This will result in errors!!!\n///\n\n";

    for (const auto& missingDef : noDefs)
    {
        windows::LogWindow::Log(windows::LogWindow::log_2, "SDK GEN", "WARNING: SDK ERRORS WILL APPEAR!! Missing definition for struct %s!!!", missingDef.c_str());
        BasicType << "//TODO: Define " << missingDef << "!\n\n\n";
    }

    for (const auto& [name, definition] : defs)
    {
        BasicType << "/// Definition for " << name << "\n";
        BasicType << definition << "\n\n";
    }
    BasicType.close();
}

void SDKGeneration::generatePackage(std::ofstream& file, const EngineStructs::Package& package)
{
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
    auto generateStruct = [&](const std::vector<EngineStructs::Struct>& DataStruc)
    {
        for (const auto& struc : DataStruc)
        {
            if (struc.isClass)
                file << "/// Class " << struc.fullName << std::endl;
            else
                file << "/// Struct " << struc.fullName << std::endl;
            char buf[100] = { 0 };
            sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc.size - struc.inheretedSize, struc.inheretedSize, struc.size);
            file << "/// " << buf << std::endl;
            if (struc.isClass)
                file << "class " << generateValidVarName(struc.cppName);
            else
                file << "struct " << generateValidVarName(struc.cppName);

            if (struc.inherited && struc.isClass)
                file << " : public " << generateValidVarName(struc.supers[0]->cppName);
            else if (struc.inherited)
                file << " : " << generateValidVarName(struc.supers[0]->cppName);


            file << "\n{ " << std::endl;

            if (struc.isClass)
                file << "public:" << std::endl;

            for (const auto& member : struc.cookedMembers)
            {
                char finalBuf[600];
                char nameBuf[500];
                std::string name = member.name;
                if (member.isBit)
                    name += " : 1";
                sprintf_s(nameBuf, "%-50s %s;", member.type.stringify().c_str(), name.c_str());
                if (member.isBit)
                    sprintf_s(finalBuf, "	%-110s // 0x%04X:%d (0x%04X) ", nameBuf, member.offset, member.bitOffset, member.size);
                else
                    sprintf_s(finalBuf, "	%-110s // 0x%04X   (0x%04X) ", nameBuf, member.offset, member.size);
                file << finalBuf << " "; // << static_cast<int>(member.type.propertyType);
                if (member.userEdited)
                    file << "USER-MODIFIED";
                else if (member.missed)
                    file << "MISSED";
                file << std::endl;
            }

            // Add function section header
            if (!struc.functions.empty())
            {
                file << "\n\n\t/// Functions" << std::endl;
            }

            for (const auto& func : struc.functions)
            {
                file << "\t// Function " << func.fullName << std::endl;
                char funcBuf[1200];
                std::string params = func.returnType.stringify() + " " + func.cppName.c_str() + "(";
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
                file << funcBuf << std::endl;
            }
            file << "};\n\n";

        }
    };

    generateStruct(package.structs);

    generateStruct(package.classes);


    for (const auto& enu : package.enums)
    {
        file << "/// Enum " << enu.fullName << std::endl;
        char buf[100] = { 0 };
        sprintf_s(buf, "Size: 0x%02d", enu.members.size());
        file << "/// " << buf << std::endl;
        file << "enum " << enu.cppName << " : " << enu.type << std::endl;
        file << "{" << std::endl;
        int j = 0;
        int i = 0;
        for (const auto& member : enu.members)
        {
            j++;
            char memberBuf[300];

            std::string fir = member.first + std::to_string(i++);

            sprintf_s(memberBuf, "	%-80s = %d%s", fir.c_str(), member.second, j == enu.members.size() ? "" : ",");
            file << memberBuf << std::endl;
        }
        file << "};\n\n";
    }
}

SDKGeneration::SDKGeneration()
{
}

void SDKGeneration::Generate(int& progressDone, int& totalProgress)
{
    windows::LogWindow::Log(windows::LogWindow::log_2, "SDK GEN", "Baking SDK...");

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

#include "SDK/BasicType.h"
)";

    generateBasicType();

    totalProgress = 10;
    progressDone = totalProgress;
    totalProgress = EngineCore::getPackages().size();
    for (const auto& package : EngineCore::getPackages())
    {
        masterHeader << "#include \"" + package.packageName + ".h" + "\"" << std::endl;

        if (package.packageName == "BasicType")
            continue;

        std::ofstream file(SDKPath / (package.packageName + ".h"));
        printCredits(file);
        file << "/// Package " + package.packageName << ".\n\n";

        generatePackage(file, package);
        file.close();
        progressDone++;
    }
    progressDone = totalProgress;
}