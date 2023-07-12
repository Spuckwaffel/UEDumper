<h1 align="left">UEDumper - Unreal Engine Dumper<br /><img src="UEDumper.png?raw=true" alt="Logo" height="250px" align="right" /></h1>

<p align="left">
  <img src="https://img.shields.io/github/license/Spuckwaffel/UEDumper" alt="License">
  <img src="https://img.shields.io/github/stars/Spuckwaffel/UEDumper" alt="Stars">
  <img src="https://img.shields.io/github/forks/Spuckwaffel/UEDumper" alt="Forks">
</p>
<p>UEDumper is a all in one Unreal Engine Dumper that supports Unreal Engine 4.19 - Unreal Engine 5.2.0 and a live editor, where you can view the generated SDK at runtime and modify the games' memory.</p>
<p><a href="#features">Features</a> &bull; 
  <a href="#getting-started">Getting Started</a> &bull; 
  <a href="#support-for-your-game">Your Game</a> &bull; 
  <a href="#usage">Usage</a> &bull; 
  <a href="#contributing">Contributing</a> &bull; 
  <a href="#license">License</a> &bull; 
  <a href="#showcase">Showcase</a> &bull; 
  <a href="https://discord.gg/KQrEsbJ7cH">Discord</a>
</p>
<h2>Features</h2>
<ul>
<li>Rich GUI with the help of the ImGui library.</li>
<li>Unreal Engine 4.19 - 5.2.0 support without having to modify any internal structures of the code.</li>
<li>SDK generator and editor.</li>
<li>Live editor to read/write the games' memory.</li>
<li>Saving the SDK to use it in your C++ project.</li>
<li>Well documented source code for the Engine.</li>
<li>Simple Definitions that change the Engine's behavior.</li>
<li>Support for Dumps Host.</li>
</ul>
<h2>Getting Started</h2>
<p>This project DOES NOT work out of the box! To support your game, you still have to reverse it on your own to find the information that is stated below.</p>
<p><strong>Please download the latest release and not the master branch as it might contain unstable code!</strong></p>
<ol>
<li>UE Version
<ul>
<li>You can find the correct UE version by right-clicking the shipping application and navigating to Properties&rarr;Details</li>
</ul>
</li>
<li>&nbsp;Offsets or signatures<br />
<ul>
<li>GObjects</li>
<li>GNames</li>
<li>GWorld and other offsets for the live editor, here is a <a href="https://www.youtube.com/watch?v=Iyie3LD9W8Y">link</a>&nbsp;for help getting this offset</li>
</ul>
</li>
<li>FName Decryption
<ul>
<li>Some games encrypt the FName. The Engine requires you to find the decryption function and add the code for it.&nbsp;</li>
<li>If there is no encryption, you can ignore this.</li>
</ul>
</li>
<li>Game settings
<ul>
<li>There are a few options for each UE version that change the internal structs of the Engine (WITH_CASE_PRESERVING_NAME, UE_BLUEPRINT_EVENTGRAPH_FASTCALLS, ..., all found under Engine/Userdefined/UEdefinitions.h). Make sure to know them!</li>
<li>Keep in mind that some games (e.g Fortnite or PUBG) might change the internal structs of the Engine that aren't normal (by modifying UE) and UEDumper won't be able to dump correctly unless you fix them by yourself</li>
</ul>
</li>
</ol>
<p>&nbsp;</p>
<h2>Support for your game</h2>
<p>If you found all the information required, you can set them in the files stated below.</p>
<p style="padding-left: 40px;"><span style="text-decoration: underline;">UE Version and Game settings</span></p>
<p style="padding-left: 40px;">In <strong>UEdefinitions.h&nbsp;</strong>(Engine/Userdefined/UEdefinitions.h) set the UE_VERSION macro to your UE version. In the file are multiple macros defined for specific internal structs of the engine you have to set too as stated in <a href="#getting-started">Getting Started</a>.</p>
<p style="padding-left: 40px;">Additionally, you can add a custom macro for your game in case your game has specific internal struct changes.</p>
<p style="padding-left: 40px;"><span style="text-decoration: underline;">Offsets or signatures</span></p>
<p style="padding-left: 40px;">In <strong>Offsets.h </strong>(Engine/Userdefined/Offsets.h) add all your offsets for your game. Please make sure to read all the comments in the file before wondering why the engine or live editor does not find your offset. When adding an offset, make sure the name parameter is unique, otherwise errors might occur. The offsets GObjects and GNames must have the name OFFSET_GNAMES and OFFSET_GOBJECTS.</p>
<p style="padding-left: 40px;">Again, you can add a custom macro in <strong>UEdefinitions.h</strong> for each game for easier switching of the offsets.</p>
<p style="padding-left: 40px;"><span style="text-decoration: underline;">FName Decryption</span></p>
<p style="padding-left: 40px;">In <strong>FName_decryption.h</strong> (Engine/Core/FName_decryption.h) you can add your custom decryption function. Make sure the macro USE_FNAME_ENCRYPTION is set to <strong>TRUE</strong>! The caller function (in Engine/Core/Core.cpp@EngineCore::FNameToString) expects to get the decrypted name in the inputBuf parameter back. Additionally, please check if the engine gets the namePoolChunk/FNameEntry correctly (in Engine/Core/Core.cpp@EngineCore::FNameToString), this might vary from game to game!</p>
<p style="padding-left: 40px;">Again, you can add a custom macro in <strong>UEdefinitions.h</strong> for each game for easier switching of the decryption and reading of the entry.</p>
<p style="padding-left: 40px;"><span style="text-decoration: underline;">Reading and writing memory</span></p>
<p style="padding-left: 40px;">As almost every popular game uses an anticheat, you might have to add your custom read write function for this project. The default implementation is basic ReadProcessMemory / WriteProcessMemory. You can add your routines in <strong>driver.h</strong> (Memory/driver.h). If possible, don't modify any parameters of the function. If you do, make sure it's compatible with the caller function (in Memory/Memory.cpp@Memory::read and Memory::write). This applies for the getBaseAddress function too.</p>
<p style="padding-left: 40px;"><span style="text-decoration: underline;">Modifying the engine</span></p>
<p style="padding-left: 40px;">As stated before, some games such as Fortnite or PUBG make manual changes to the engine that i cannot implement by default by toggling a macro. You have to figure that out on your own what structs they changed. However, any manually defined Unnreal Engine class is in <strong>UnrealClasses.cpp</strong> and <strong>UnrealClasses.h </strong>(Engine/UEClasses/) and changes should only appear there.</p>
<h2>Usage</h2>
<p>If you set all information and are ready to dump, there is nothing from stopping you. Though, here is some basic explanation of the tool you might need.</p>
<ol>
<li>Hello window
<ul>
<li>The first window, also known as the hello window, requires you to enter a project name. This is required as you might want to save your project or create a dump. The location of any files will be in the application directory&rarr;project name (this will be your working directory). You have to choose a non-existing or empty folder. The process name should be the exact name of the target process and is case-sensitive.&nbsp;</li>
<li>The settings button displays your current macro settings and a log level. The log level from 0-4 is a level of how much info you want to get logged, where 0 is everything and 4 only the most important information. On level 0 you might get thousands of log messages throughout the dump process because the engine will log every abnormality while dumping which can be ignored in most cases.</li>
<li>Additionally, you can load any existing project (.uedproj file) that gets opened to skip the dumping part. Though you cannot use the live editor when loading a project as specific important data might be different (also known as OFFLINE MODE). However, you can still make changes and look at every package. You dont have to worry about macro mismatches, only the UE version must match.<br /><br /></li>
</ul>
</li>
<li>Package windows
<ul>
<li>Once the dump is complete (which shouldn't take long) you get a list of all packages ordered by name. If you click on a package, it will open the package viewer, which will display any struct/class/enum you select. You can also display the entire package content, but this might be very laggy in large packages.&nbsp;</li>
<li>You can click on every member type and on the inheritors of each class, and you will directly jump to the specific struct/class/enum. Furthermore, you can always go back by clicking on the navigation buttons or by clicking on the package you were before. The navigation bar is unique for every open package, it isn't shared across the packages.</li>
<li>You can search for a struct/class/enum in the search bar top left, and it will jump to it if the name got found.</li>
<li>Sometimes an edit button is displayed next to a member. If this button appears, it means that either the member got manually defined or is a byte array, which indicates that the member is missing. You can manually define it, but before, it is recommended reading how to read/save changes to members.</li>
<li>You can save your project, save changes, create an SDK at any time you want. The files will appear in your working directory. If you save your project, it will create a .uedproj file, which you can use the next time you start the dumper. If you save changes, you only save changes you made to structs/classes. It will create a StructDefinitions file you can use to overwrite the existing StructDefinitions file. It is recommended to read how to use this file.</li>
</ul>
</li>
<li>Live editor
<ul>
<li>The live editor allows you to read the game memory while the game is running with support of the dumped structs. For example, you can browse the entire UWorld class and all its members and write values. Please keep in mind that the live editor has a certain refresh limit which reads all open structs' memory each x milliseconds (default 500ms).</li>
<li>You can either inspect a certain address (which should point directly to the UObject) or use a defined offset in <strong>Offsets.h</strong>. When using an offset, it should point to a pointer of the UObject. For example, the common UWorld sig points to a pointer which holds the address of the UWorld object. So it's possible, that whenever the world changes, the live editor will use automatically the new world.&nbsp;</li>
<li>Keep in mind that the live editor could crash at any time, so make sure to save all your changes before.&nbsp;</li>
<li>At the moment, the live editor is designed to allow the user to only overwrite members that are not a pointer or a custom datatype, as modifying pointers could result in a crash. Some completely custom types might be not able to get displayed at all.</li>
</ul>
</li>
<li>Custom structs, members and data types
<ul>
<li>In case you don't want to see for example uint8_t or int64_t everywhere in the editor or in your dump, you can set the name of the types in <strong>Datatypes.h</strong> (Engine/Userdefined/Datatypes.h)</li>
<li>If you want to override a class completely, partly or create a new class that will be visible in the editor and live editor, you can do that in <strong>StructDefinitions.h</strong> (Engine/Userdefined/StructDefinitions.h). Please make sure to read the file and examples where to add your code and how. If you make any changes at runtime, it requires you to enter the case-sensitive PropertyType. Please only overwrite the member, and don't add a member at a completely different offset or a completely wrong size. This will result in a broken SDK generation because sizes don't match anymore, and the live editor might crash. It's always safer to override/add a member in StructDefinitions.h than in the editor, because some checks might not be made. However, there is no check if the size of your defined member is correct, the engine will guess you are right. If you use a wrong size, the live editor and the SDK will be wrong!</li>
</ul>
</li>
<li>Adding custom support in the live editor
<ul>
<li>This isn't an easy task. However, this depends on what you want to add. If you want to display a struct in a single line like a FVector or display a color picker, you can do that in LiveEditor.cpp@LiveEditor::drawStructProperty.</li>
<li>If you want to add support for a completely new type, make sure to call the function from LiveEditor::drawMembers for the specific PropertyType. Please look at the code from the existing function to know what and what to do not. Please refrain from doing writes every frame and calling heavy functions that don't use unordered maps.</li>
</ul>
</li>
</ol>
<p>&nbsp;</p>
<h2>Contributing</h2>
<p>Contribution is always appreciated! I will most likely not add support for Unreal Engine 3 or before, but you can.</p>
<p>Please keep in mind that i will not accept any pull requests that change the entire code base, do not use any caching, arent documented or just messy.&nbsp;</p>
<p>This project is a very large project but very stable and uses a lot caching for almost everything in order to work properly and fast. However, if you find any better solutions, feel free to create a pull request to implement it.</p>
<p>&nbsp;</p>
<h2>Thank you</h2>
<p>This project was made entirely by me and I spent a lot of free time in this project and after all i still released it to the public entirely free.&nbsp;</p>
<p>Special thanks to Blue Fire for the idea, help and suggestions.</p>
<p>Also special thanks to guttir14 (and all contributers to UnrealDumper-4.25) and CorrM (and all contributers to Unreal-Finder-Tool), I've used their projects as a reference while making this tool.</p>
<p>Remember to only use this for personal use, this has been done entirely for research purposes only and should not be used in any bad way.</p>
<p>&nbsp;</p>
<h2>License</h2>
<p>This project is licensed under the terms of the MIT license.</p>
<h2>Showcase</h2>
<p><a href="https://www.youtube.com/watch?v=DUGL_fD71Fg">Here a video on YouTube showcasing the game Only UP</a></p>
<p>Join the discord for any questions and help <a href="https://discord.gg/KQrEsbJ7cH">here.</a></p>
