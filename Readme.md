# BashSlide

This program displays slides of very basic Bash commands used in Linux and related systems. The text file content can be edited as desired.

## Usage

BashSlide expects the text files to be located in the same directory as the console app. See /bin/Release or BashSlide.zip for a compiled, working copy.

1. Extract [BashSlide.zip](BashSlide.zip) to a `BashSlide` directory, or, copy all files from [/Release](/bin/Release) into a directory `BashSlide`.

2. (Optional) You can ensure that the console app `BashSlide` and Shell script `bashslide.sh` are executable in Linux by running `sudo chmod a+x filename` from the BashSlide directory.

3. Copy the BashSlide directory to any location of your choice. You can run `./BashSlide` directly from the BashSlide directory if you wish.

4. To run BashSlide from any directory, first we need to set the path in the shell script. Open the shell script in any text editor and follow the instructions about setting the path to `BashSlide` directory on your machine. Then add the same path to PATH environment with `export PATH=$PATH:/pathToBashSlideDirectory` to the end of the (hidden) `.bashrc` located your /home directory. This will be a per-user setting not a system-wide setting. Close all terminals (to allow the new PATH variables to apply) and then in a new terminal type `bashslide.sh` to execute.

## Source code

The path and TXT file names can be changed in main.cpp if needed, though the BashSlide project will subsequently need recompiling. The C++ source files can be downloaded from https://github.com/jfspps/BashSlide. The project is released under GPL v2 terms and conditions.
