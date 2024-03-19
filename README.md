<h1 align="left">UEDumper - Unreal Engine Dumper<br /><img src="UEDumper.png?raw=true" alt="Logo" height="250px" align="right" /></h1>

<p align="left">
  <img src="https://img.shields.io/github/license/Spuckwaffel/UEDumper" alt="License">
  <img src="https://img.shields.io/github/stars/Spuckwaffel/UEDumper" alt="Stars">
  <img src="https://img.shields.io/github/forks/Spuckwaffel/UEDumper" alt="Forks">
  <img src="https://komarev.com/ghpvc/?username=UEDumper&label=Views" alt="Views">
</p>
<p>UEDumper is a all in one Unreal Engine Dumper that supports Unreal Engine 4.19 - Unreal Engine 5.3.0 and a live editor, where you can view the generated SDK at runtime and modify the games' memory.</p>
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
<li>Unreal Engine 4.19 - 5.3.0 support without having to modify any internal structures of the code.</li>
<li>SDK generator and editor.</li>
<li>New MDK type generator.</li>
<li>Live editor to read/write the games' memory.</li>
<li>Saving the SDK and MDK to use it in your C++ project.</li>
<li>Well documented source code for the Engine.</li>
<li>Simple Definitions that change the Engine's behavior.</li>
<li>Support for Dumpspace.</li>
</ul>
<h2>Getting Started</h2>
<p><strong>Please download the latest release and not the master branch as it might contain unstable code!</strong></p>
<p>This project DOES NOT work out of the box! To support your game, you still have to reverse it on your own to find the information that is stated below. If you are not familiar with Unreal Engine or reverse engineering you will have a difficult time!</p>

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
<li>Optional: GWorld and other offsets for the live editor</li>
</ul>
</li>
<li>FName Decryption
<ul>
<li>Some games encrypt the FNames in the Name array. The Engine requires you to know and add the decryption routine.&nbsp;</li>
<li>If there is no encryption, you can ignore this.</li>
</ul>
</li>
<li>Game settings
<ul>
<li>Most of the time the default settings in UEdefinitions.h work fine, but sometimes not. If you are 100% sure your offsets are set and correct, you might have to toggle macro definitions such as WITH_CASE_PRESERVING_NAME or STATS. More info to that is in the file.</li>
<li>A few games like Fortnite or PUBG might change the internal structures of the Engine that aren't normal (by modifying UE) and UEDumper won't be able to dump correctly unless you adjust them by yourself. UEDumper can not provide any info where these changes have been made. The fortnite branch in this repo will give you an example how modifications could look like.</li>
</ul>
</li>
</ol>
<p>Need help? Feel free to join the discord for additional help and finding tutorials how to find these settings for your game.</p>
<p>&nbsp;</p>
<h2>Support for your game</h2>
<p>If you found all the information required by the step above, you can set them in the files stated below.</p>
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
<p style="padding-left: 40px;">As stated before, some games such as Fortnite or PUBG make manual changes to the engine that cannot be implemented by default by toggling a macro. You have to figure that out on your own what structs they changed. However, any manually defined Unnreal Engine class is in <strong>UnrealClasses.cpp</strong> and <strong>UnrealClasses.h </strong>(Engine/UEClasses/) and changes should only appear there.</p>
<h2>Usage</h2>
<p>If you set all information and are ready to dump, there is nothing from stopping you. Usage is quite straight forward and the Dumper will throw Errors when dumping if the offsets or settings are incorrect. A video showcasing UEDumper and its capabilities is linked below.</p>
<p>The Live editor is experimental and requires basic knowledge how classes and structures work. Any reading or writing in the Live editor may cause game or dumper crashes.</p>
<p>Once you are done looking into your game, you can either save your project or save a SDK/MDK and Dumpspace files.</p>
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
<h2>Info</h2>
<p>This project was not made for monetary gain and was not designed to target any games or developers who create Unreal Engine games or work at Unreal Engine. UEDumper is solely a third party tool allowing other skilled developers to view their target games' internal structure using Unreal Engines own Reflection System.</p>
