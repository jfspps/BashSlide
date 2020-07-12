# BashSlide

This program displays lists (previously intended as slides) of very basic Bash commands used in Linux and related systems, from the console. The text file content can be edited as desired.

## Usage

BashSlide looks for the text files in the same directory as the console app. See /bin/Release or [BashSlide.zip](BashSlide.zip) for a compiled, working copy.

1. Extract [BashSlide.zip](BashSlide.zip) to a `BashSlide` directory, or, copy all files from [/Release](/bin/Release) into a directory `BashSlide`.

2. (Optional) You can ensure that the console app `BashSlide` and Shell script `bashslide.sh` are executable in Linux by running `sudo chmod a+x filename` from the BashSlide directory.

3. Copy the BashSlide directory to any location of your choice. You can run `./BashSlide` directly from the console in the BashSlide directory if desired.

4. To run BashSlide from any directory, first set the path in the shell script. Open bashslide.sh in any text editor and follow the instructions, setting the path to `BashSlide` directory on your machine. Then add the same path to PATH environment with `export PATH=$PATH:/pathToBashSlideDirectory` to the end of the (hidden) `.bashrc` located your /home directory. This will be a per-user setting not a system-wide setting. Close all terminals to allow the new PATH variables to apply. You should now be able to run BashSlide from the console from anywhere by entering `bashslide.sh`.

## Source code

The path and TXT file names can be changed in main.cpp if needed, though the BashSlide project will subsequently need recompiling. Recompilation of BashSlide is not required if all you want to do is change the content of the text files. The C++ source files can be downloaded from https://github.com/jfspps/BashSlide. The project is released under GPL v2 terms and conditions.
