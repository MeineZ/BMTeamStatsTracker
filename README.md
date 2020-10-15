# Team Stats Tracker
BakkesMod Rocket League plugin to keep track of and display team stats. It shows the number of passing plays, assists, goals, saves, and much more!

Also checkout my other plugin(s):
 * SessionPlugins ([bakkesplugins.com](https://bakkesplugins.com/plugins/view/151)) ([GitHub Repo](https://github.com/MeineZ/BMSessionPlugin))

## Installation
You can send me a DM on Discord to receive the plugin: Meine#8883 or, if you want to build it yourself either:

* Set an environment variable
    1. Add a BAKKES_MOD environment variable that has the path to the bakkesmod folder (e.g. 'STEAMLIBRARY/steamapps/common/rocketleague/Binaries/Win64/bakkesmod')
    2. Restart computer
    3. Build the solution in Release | 64-bit
* Edit the project properties to correct the paths (replace BAKKES_MOD environment variable with the path to the bakkesmod folder in the rocket league 64 bin folder)
    1. C/C++ -> General -> Additional Include Directories
    2. Linker -> General -> Additional Library Directories
    3. Build Events -> Post-Build Event -> Command Line
        1. SessionPlugin.dll
        2. SessionPlugin.set
