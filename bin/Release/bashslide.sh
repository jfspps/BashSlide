# This script runs BashSlide from any directory with its text files
# It runs a subshell by temporarily hopping to the directory given by the first parameter, running the command given by the second parameter and then 
# coming back to the directory where the console is currently set to

# Initially, I extracted BashSlide to a (hidden) directory called .bashSlide in my HOME directory
# All text files, the BashSlide executable and this script are located in .bashSlide

# If you extracted to a different path, change the first parameter to match the path to the BashSlide directory (not the executable itself) but leave 
# the second parameter as is
(cd ~/.bashSlide/ && ./BashSlide)
