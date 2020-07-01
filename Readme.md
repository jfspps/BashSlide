# BashSlide

This program displays slides of very basic Bash commands used in Linux and related systems. The text file content can be edited as desired.

## Usage

BashSlide expects the text files to be located in the same directory as the console app. See /bin/Release for a compiled, working copy.

You can ensure that the console app (BashSlide) and Shell script (bashslide.sh) are executable in Linux by running 'sudo chmod a+x filename' from the BashSlide directory. Copy the BashSlide directory to any location of your choice and then for convenience, add the path to PATH environment with 'export PATH=$PATH:/pathToBashSlideDirectory' added at the end of the (hidden) .bashrc located your /home directory. This will be a per-user setting not a system-wide setting. Then run 'bashslide.sh'.

The path and TXT file names can be changed in main.cpp if needed, though the BashSlide project will subsequently need recompiling.

## Source code

The C++ source files can be downloaded from https://github.com/jfspps/BashSlide. The project is released under GPL v2 terms and conditions.
