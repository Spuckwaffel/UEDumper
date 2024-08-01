#include "SDK.h"


#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"
#include "packageSorter.h"
#include "Engine/Userdefined/FeatureFlags.h"

#include <algorithm>

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

    BasicType << "#pragma once" << std::endl;
    BasicType << "#include <cstdint>" << std::endl;
    BasicType << "#include <locale>" << std::endl;

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


void SDKGeneration::generatePackage(
    std::ofstream& stream,
    const EngineStructs::Package& package,
    int featureFlags,
    std::unordered_map<std::string, std::string> &originalPackageToMerged
) {
    stream << "#pragma once\n";
    //flag some invalid characters in a name
    auto generateValidVarName = [](const std::string& str, bool allowBrackets = false)
    {
        std::string result = "";
        for (const char c : str)
        {
            if (c == ' ')
                continue;
            if (static_cast<int>(c) < 0 || !std::isalnum(c))
            {
                if(allowBrackets && (c == '[' ||  c == ']'))
                    result += c;
                else
					result += '_';
            }
                
            else
                result += c;

        }

        const static std::unordered_set<std::string> reservedNames{ "float", "int", "bool", "double", "long", "char", "TRUE", "FALSE", "try" };

        if (std::isdigit(result[0])) result = "_" + result;
        if (reservedNames.contains(result)) result += "0";

        //guaranteed 0 termination
        return result;
    };

    if (featureFlags & FeatureFlags::SDK::ADD_INCLUDES)
    {
        for (auto& dependencies : package.dependencyPackages)
        {
            auto packageName = dependencies->packageName;
            if (originalPackageToMerged.contains(packageName))
                packageName = originalPackageToMerged[packageName];

            stream << "#include \"" << packageName << ".h\"" << std::endl;
        }
    }
    else
    {
        for (auto& dependencies : package.dependencyPackages)
        {
            stream << "/// dependency: " << dependencies->packageName << std::endl;
        }
    }

    stream << "\n";

    stream << "#pragma pack(push, 0x1)\n" << std::endl;

    auto generateForwardDecls = [&](const std::vector<EngineStructs::Struct*>& DataStruc)
    {
        std::set<std::string> forwardDeclTypes; // ordered in case SDK is in VCS
        for (const auto& struc : DataStruc)
        {
            if (!struc->isClass) continue;

            forwardDeclTypes.insert("class " + generateValidVarName(struc->cppName));
        }

        for (auto decl = forwardDeclTypes.begin(); decl != forwardDeclTypes.end(); decl++)
        {
            stream << *decl << ";" << std::endl;
        }
    };

    auto areAnyMembersUndefined = [&](EngineStructs::Member* member)
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

        return anyUndef;
    };

    auto areAnyParamsUndefined = [&](EngineStructs::Function func)
    {
        std::unordered_set<std::string> noDefs;
        for (auto type : EngineCore::getAllUnknownTypes()) noDefs.insert(type);

        bool anyUndef = false;

        auto checkAllSubs = [&](const fieldType& type, auto& self) -> void
        {
            for (auto& sub : type.subTypes)
            {
                if (noDefs.contains(sub.name)) {
                    anyUndef = true;
                    break;
                }
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

        if (func.returnType.propertyType == PropertyType::Unknown) anyUndef = true;
        else if (noDefs.contains(func.returnType.name)) anyUndef = true;
        else
        {
            for (auto param : func.params)
            {
                if (
                    std::get<0>(param).propertyType == PropertyType::Unknown ||
                    noDefs.contains(std::get<0>(param).name)
                ) {
                    anyUndef = true;
                    break;
                }
                else
                {
                    checkAllSubs(std::get<0>(param), checkAllSubs);
                }
            }
        }
        if (!anyUndef && func.returnType.subTypes.size() > 0)
        {
            checkAllSubs(func.returnType, checkAllSubs);            
        }

        return anyUndef;
    };

    auto generateStaticAssertsForObjectSizes = [&](const std::vector<EngineStructs::Struct*>& DataStruc)
    {
        for (const auto& struc : DataStruc)
        {
            char buf[1024] = { 0 };

            //maxsize has been decresed to 0 because of a super struct, we have to "fix it"
            //for the static assert as single structs with no member cant be 0 bytes

            uint64_t actualSize = struc->maxSize;

            if(struc->size == 1 && struc->maxSize == 0)
                actualSize = 1;

            sprintf_s(buf, "static_assert(sizeof(%s) == 0x%04llX); // %d bytes (0x%06X - 0x%06llX)", generateValidVarName(struc->cppName).c_str(), actualSize, struc->maxSize, struc->getInheritedSize(), actualSize);
            stream << buf << std::endl;
        }
    };

    auto generateStaticAssertsForMembers = [&](const std::vector<EngineStructs::Struct*>& DataStruc)
        {
            for (const auto& struc : DataStruc)
            {
                const auto klass = generateValidVarName(struc->cppName);
                std::vector<std::string> usedNames{};

                int j = 0;
                for (int i = 0; i < struc->cookedMembers.size(); i++)
                {
                    const auto member = struc->getMemberForIndex(i);
                    std::string name = generateValidVarName(member->name, true);

                    if (std::isdigit(name[0]))
                        name = "_" + name;

                    if (name.empty())
                        name = "noname";

                    if (std::ranges::find(usedNames, name) != usedNames.end())
                        name += std::to_string(j++);

                    name = generateValidVarName(name);

                    usedNames.push_back(name);

                    if (areAnyMembersUndefined(member)) continue;

                    char buf[1024] = { 0 };
                    sprintf_s(buf, "static_assert(offsetof(%s, %s) == 0x%04X);", klass.c_str(), name.c_str(), member->offset);
                    stream << buf << std::endl;
                }
            }
        };

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
            {
                stream << "/// Struct " << struc->fullName << std::endl;
            }
            char buf[256] = { 0 };
            sprintf_s(
                buf, 
                "Size: 0x%04X (%d bytes) (0x%06X - 0x%06X) align %s MaxSize: 0x%04X",
                struc->size,
                struc->size,
                struc->getInheritedSize(), 
                struc->size, 
                (struc->minAlignment > 0 ? std::to_string(struc->minAlignment) : "n/a").c_str(),
                struc->maxSize
            );
            stream << "/// " << buf << std::endl;

            if (struc->isClass)
                stream << "class ";
            else
                stream << "struct ";


            /*if (needsHelp)
            {
                char buf1[100] = { 0 };
                sprintf_s(buf1, "alignas(0x%X) ", struc->minAlignment);
                stream << buf1;
            }*/

            stream << generateValidVarName(struc->cppName);

            if (struc->inherited && struc->isClass)
                stream << " : public " << generateValidVarName(struc->supers[0]->cppName);
            else if (struc->inherited)
                stream << " : " << generateValidVarName(struc->supers[0]->cppName);


            stream << "\n{ " << std::endl;

            if (struc->isClass)
                stream << "public:" << std::endl;

            std::vector<std::string> usedNames{};


            int j = 0;

            for (int i = 0; i < struc->cookedMembers.size(); i++)
            {
                const auto member = struc->getMemberForIndex(i);
                char finalBuf[600];
                char nameBuf[500];
                std::string name = generateValidVarName(member->name, true);

                if (name.empty())
                    name = "noname";

                else if (std::isdigit(name[0]))
                    name = "_" + name;

                if (std::ranges::find(usedNames, name) != usedNames.end())
                    name += std::to_string(j++);



                usedNames.push_back(name);

                std::string memberType = member->type.stringify().c_str();

                if (member->type.clickable && areAnyMembersUndefined(member))
                {
                    memberType = "SDK_UNDEFINED(" + std::to_string(member->size) + "," + std::to_string(undefinedCnt++) + ") /* " + memberType + " */";
                    name = "__um(" + member->name + ")";
                } else if (member->arrayDim > 1) {
                    name += "[" + std::to_string(member->arrayDim) + "]";
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

            uint32_t vtableIndex = 0;
            std::unordered_set<std::string> alreadyGeneratedFunctions;
            for (const auto& func : struc->functions)
            {
                if (alreadyGeneratedFunctions.contains(func.fullName)) {
                    // some blueprint functions will be duplicated with exact same signatures, offsets, the lot
                    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_WARNING, "SDK GEN", "WARNING: Duplicate function %s in struct %s. Skipping...", func.fullName.c_str(), struc->fullName.c_str());
                    continue;
                }
                alreadyGeneratedFunctions.insert(func.fullName);

                stream << "\t// Function " << func.fullName << std::endl;
                char funcBuf[4000];
                const auto bAddPrefix = featureFlags & FeatureFlags::SDK::FUNCTION_BODIES ? false : true;

                std::string params = "" + func.returnType.stringify(bAddPrefix) + " " + generateValidVarName(func.cppName).c_str() + "(";
                std::string funcPtrTypes = "";
                std::string funcPtrParams = "";

                std::unordered_set<std::string> alreadyUsedNames;

                for (auto param : func.params)
                {
                    params += std::get<0>(param).stringify(bAddPrefix);
                    funcPtrTypes += std::get<0>(param).stringify(bAddPrefix);

                    if (std::get<3>(param) > 1)
                    {
                        params += "*";
                        funcPtrTypes += "*";
                    }
                    else if (std::get<2>(param) & EPropertyFlags::CPF_OutParm)
                    {
                        params += "&";
                        funcPtrTypes += "&";
                    }

                    std::string paramName = generateValidVarName(std::get<1>(param));

                    // some func signatures re-use the variable name, so we need to make them unique
                    int duplicateParamCounter = 0;
                    while (alreadyUsedNames.contains(paramName)) paramName = generateValidVarName(std::get<1>(param)) + std::to_string(++duplicateParamCounter);
                    alreadyUsedNames.insert(paramName);

                    params += " " + paramName + ", ";
                    funcPtrTypes += ", ";
                    funcPtrParams += paramName + ", ";
                }
                if (func.params.size() > 0)
                {
                    params = params.erase(params.size() - 2);
                    funcPtrTypes = funcPtrTypes.erase(funcPtrTypes.size() - 2);
                    funcPtrParams = funcPtrParams.erase(funcPtrParams.size() - 2);
                }

                if (featureFlags & FeatureFlags::SDK::FUNCTION_BODIES && !areAnyParamsUndefined(func))
                {
                    params += ")";
                    sprintf_s(funcBuf, "	%s // [0x%llx] %-20s ", params.c_str(), func.binaryOffset, func.functionFlags.c_str());
                    stream << funcBuf << std::endl;

                    bool isVoidFunc = func.returnType.stringify() == "void";

                char funcBody[4000];
                sprintf_s(funcBody, R"EOF(	{
		typedef %s (*FuncPtr)(%s);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[%d]);
		%sfunc(%s);
	})EOF", func.returnType.stringify().c_str(), funcPtrTypes.c_str(), vtableIndex, isVoidFunc ? "" : "return ", funcPtrParams.c_str());
                    stream << funcBody << std::endl;
                }
                else {
                    params += ");";
                    sprintf_s(funcBuf, "	// %-120s // [0x%llx] %-20s ", params.c_str(), func.binaryOffset, func.functionFlags.c_str());
                    stream << funcBuf << std::endl;
                }

                vtableIndex++;

            }
        	stream << "};\n\n";


        }
    };

    if (featureFlags & FeatureFlags::SDK::FORWARD_DECLARATIONS) {
        generateForwardDecls(package.combinedStructsAndClasses);
        stream << "\n";
    }

    //first we generate enums

    std::unordered_set<std::string> definedEnums;

    for (const auto& enu : package.enums)
    {
        if (definedEnums.contains(enu.cppName))
            continue;
        definedEnums.insert(enu.cppName);

        stream << "/// Enum " << enu.fullName << std::endl;
        char buf[100] = { 0 };
        sprintf_s(buf, "Size: 0x%02d (%d bytes)", enu.size, enu.size);
        stream << "/// " << buf << std::endl;
        stream << "enum class " << enu.cppName << " : " << enu.type << std::endl;
        stream << "{" << std::endl;

        int j = 0;
        std::vector<std::string> usedNames{};

        for (const auto& member : enu.members)
        {
            j++;
            char memberBuf[300];

            std::string fir = generateValidVarName(member.first);

            if (std::ranges::find(usedNames, fir) != usedNames.end())
                fir += std::to_string(j);

            usedNames.push_back(fir);

            sprintf_s(memberBuf, "	%-80s = %d%s", fir.c_str(), member.second, j == enu.members.size() ? "" : ",");
            stream << memberBuf << std::endl;
        }
        stream << "};\n\n";
    }


    // this feature flag exists so that classes that reference structs in their call signatures
    // can be defined, without needing forward declarations of structs everywhere
    if (featureFlags & FeatureFlags::SDK::STRUCTS_BEFORE_CLASSES)
    {
        std::vector<EngineStructs::Struct*> structs;
        std::vector<EngineStructs::Struct*> classes;

        for (auto cpackage : package.combinedStructsAndClasses)
        {
            if (cpackage->isClass) classes.push_back(cpackage);
            else structs.push_back(cpackage);
        }

        generateStruct(structs);
        generateStruct(classes);
    }
    else
    {
        generateStruct(package.combinedStructsAndClasses);
    }

    stream << "#pragma pack(pop)\n\n" << std::endl;

    // add static asserts for objects
    if (featureFlags & FeatureFlags::SDK::STATIC_ASSERTS_OBJECT_SIZE)
        generateStaticAssertsForObjectSizes(package.combinedStructsAndClasses);
    // add static asserts for members
    if (featureFlags & FeatureFlags::SDK::STATIC_ASSERTS_MEMBERS)
        generateStaticAssertsForMembers(package.combinedStructsAndClasses);

}

SDKGeneration::SDKGeneration()
{
}

void SDKGeneration::Generate(int& progressDone, int& totalProgress, int featureFlags)
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
    const auto sortedPackages = sortPackages(progressDone, totalProgress, newPackages);


    std::unordered_map<std::string, std::string> originalPackageToMerged;
    for (auto& pack : sortedPackages)
    {
        for (auto& mergedPack : pack->mergedPackages) {
            originalPackageToMerged.insert(std::pair<std::string, std::string>(mergedPack->packageName, pack->package.packageName));
        }
    }

    puts("------sorted packages------");
    for (auto& pack : sortedPackages)
    {
        printf("%s\n", pack->package.packageName.c_str());
    }
    puts("---------------------------");

    //generateBasicType();

    totalProgress = sortedPackages.size();
    progressDone = 0;
    int tooLongNames = 0;
    for (auto& pack : sortedPackages)
    {
        std::string packageName = pack->package.packageName;
        if(packageName.length() > 100)
        {
            packageName = "tooLongPackage_" + std::to_string(tooLongNames++);
            masterHeader << "// Package name has been changed because the name was too long. Original name:" << std::endl;
            masterHeader << "// " << pack->package.packageName << std::endl;
        }

        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SDK GEN", "Baking package %s", packageName.c_str());

    	masterHeader << "#include \"SDK/" + packageName + ".h\"" << std::endl;
        if (pack->package.packageName == "BasicType")
            generateBasicType();
        else
        {
            std::string _packageName = packageName + ".h";
            std::ofstream package(SDKPath / _packageName);
            printCredits(package);
            generatePackage(package, pack->package, featureFlags, originalPackageToMerged);
            package.close();
        }

        progressDone++;
    }
    masterHeader.close();
    progressDone = totalProgress;
}
