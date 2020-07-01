/*
BashSlide by James Apps, GPL v2
*/

#include <iostream>
#include <fstream>
using namespace std;

void showMenu();
void choose(int*);
int handleInput(int*);
void handleChoice(int*, string);

const string CHOICE = "/choices.txt";
const string CHOICE_0 = "/0LinuxIntro.txt";
const string CHOICE_1 = "/1BasicCommands.txt";
const string CHOICE_2 = "/2GettingMoreInfo.txt";
const string CHOICE_3 = "/3Directories.txt";
const string CHOICE_4 = "/4FileLists.txt";
const string CHOICE_5 = "/5Permissions.txt";
const string CHOICE_6 = "/6FindFile.txt";
const string CHOICE_7 = "/7FileHandling.txt";
const string CHOICE_8 = "/8WildcardsRegExp.txt";
const string CHOICE_9 = "/9IOredirection.txt";
const string CHOICE_10 = "/10SearchingFileContent.txt";
const string CHOICE_11 = "/11CommandAlias.txt";
const string CHOICE_12 = "/12Sudo.txt";
const string CHOICE_13 = "/13CommandHistory.txt";
const string CHOICE_14 = "/14EnvironmentVariables.txt";
const string CHOICE_15 = "/15ProcessesAndJobs.txt";
const string CHOICE_16 = "/16SchedulingJobs.txt";
const string CHOICE_17 = "/17PackageInstallation.txt";
string base;

int main(int argc, char* argv[])
{
    //determine the full path to the exectable and then rebuild the TXT paths
    //argv[0] is the path and console app name (argv[1] etc. would be arguments)
    string argv_str(argv[0]);

    //build a substring up until the console app name
    base = argv_str.substr(0, argv_str.find_last_of("/"));

    //cout << "Running BashSlide from " << base << '\n';

    //ask the user to choose
    int choice;

    while(handleInput(&choice) != -1){
        choose(&choice);
        choice = -1;
    }

    return 0;
}

void showMenu()
{
    ifstream menu (base+CHOICE);
	if (menu.is_open())
		cout << menu.rdbuf() << '\n';
	else
		cout << "Could not open Menu text file. Enter CTRL-C to quit.\n";
}

int handleInput(int* choice)
{
    showMenu();
    cin >> *choice;

    //by now, *choice = -1 if the user entered values out of bounds
    if (*choice < 0 || *choice > 17){
        return -1;
    }
    cin.get();  //clears ENTER
    return *choice;
}

void handleChoice(int* choice, string path)
{
    ifstream screen (base+path);
    if (screen.is_open()){
        cout << screen.rdbuf() << "\nPress enter to return to options...\n";
        cin.get();
    }
    else {
        cout << "Could not open text file\n";
        cin.get();
    }
}

void choose(int* choice)
{
    switch(*choice) {
        case 0: {
            handleChoice(choice, CHOICE_0);
            break;
        }
        case 1: {
            handleChoice(choice, CHOICE_1);
            break;
        }
        case 2: {
            handleChoice(choice, CHOICE_2);
            break;
        }
        case 3: {
            handleChoice(choice, CHOICE_3);
            break;
        }
        case 4: {
            handleChoice(choice, CHOICE_4);
            break;
        }
        case 5: {
            handleChoice(choice, CHOICE_5);
            break;
        }
        case 6: {
            handleChoice(choice, CHOICE_6);
            break;
        }
        case 7: {
            handleChoice(choice, CHOICE_7);
            break;
        }
        case 8: {
            handleChoice(choice, CHOICE_8);
            break;
        }
        case 9: {
            handleChoice(choice, CHOICE_9);
            break;
        }
        case 10: {
            handleChoice(choice, CHOICE_10);
            break;
        }
        case 11: {
            handleChoice(choice, CHOICE_11);
            break;
        }
        case 12: {
            handleChoice(choice, CHOICE_12);
            break;
        }
        case 13: {
            handleChoice(choice, CHOICE_13);
            break;
        }
        case 14: {
            handleChoice(choice, CHOICE_14);
            break;
        }
        case 15: {
            handleChoice(choice, CHOICE_15);
            break;
        }
        case 16: {
            handleChoice(choice, CHOICE_16);
            break;
        }
        case 17: {
            handleChoice(choice, CHOICE_17);
        }
    }
}
