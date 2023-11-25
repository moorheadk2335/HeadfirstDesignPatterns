# Code to Accompany Head First Design Patterns

## Requirements
This code uses the meson build system to generate executables. A quickstart guide for meson can be found [here](https://mesonbuild.com/Quick-guide.html). 

## How to Use
While there are multiple ways to configure the build environment, the most basic command set to get the code up and running is as follows:

`
cd {desired project, e.g. StrategyPattern}; 
meson setup builddir && cd builddir;
meson compile;
meson test
`

The executable for each project can be found in the root meson.build file in the "executable" command. This can be used to determine the name of the generated .exe file. 