# This script runs BashSlide from any directory with its text files
# It runs a subshell by assuming that you are in the BashSlide directory without changing the current working directory
# There are two parts, the path and then the executable. Change the path to locate the BashSlide directory (note
# that BashSlide does not actually appear in the path) and save this script. ~ is the /home directory

(cd ~/Dev/BashSlide/bin/Release/ && ./BashSlide)
