/*
BashSlide by James Apps, GPL v2
*/

#include <iostream>
#include <fstream>
using namespace std;

void buildPaths(string);
void showMenu();
void choose(int*);
int handleInput(int*);
void handleChoice(int*, string);

string CHOICE = "/texts/choices.txt";
string CHOICE_0 = "/texts/0LinuxIntro.txt";
string CHOICE_1 = "/texts/1BasicCommands.txt";
string CHOICE_2 = "/texts/2GettingMoreInfo.txt";
string CHOICE_3 = "/texts/3Directories.txt";
string CHOICE_4 = "/texts/4FileLists.txt";
string CHOICE_5 = "/texts/5Permissions.txt";
string CHOICE_6 = "/texts/6FindFile.txt";
string CHOICE_7 = "/texts/7FileHandling.txt";
string CHOICE_8 = "/texts/8WildcardsRegExp.txt";
string CHOICE_9 = "/texts/9IOredirection.txt";
string CHOICE_10 = "/texts/10SearchingFileContent.txt";
string CHOICE_11 = "/texts/11CommandAlias.txt";
string CHOICE_12 = "/texts/12Sudo.txt";
string CHOICE_13 = "/texts/13CommandHistory.txt";
string CHOICE_14 = "/texts/14EnvironmentVariables.txt";
string CHOICE_15 = "/texts/15ProcessesAndJobs.txt";
string CHOICE_16 = "/texts/16SchedulingJobs.txt";
string CHOICE_17 = "/texts/17PackageInstallation.txt";

int main(int argc, char* argv[])
{
    //determine the full path to the exectable and then rebuild the TXT paths
    string argv_str(argv[0]);
    string base = argv_str.substr(0, argv_str.find_last_of("/"));
    buildPaths(base);

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
    cout << "Enter a number 0-17 to view one of the following (other values or letters to quit)\n";
    ifstream menu (CHOICE);
	if (menu.is_open())
		cout << menu.rdbuf() << '\n';
	else
		cout << "Could not open Menu text file\n";
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
    ifstream screen (path);
    if (screen.is_open()){
        cout << screen.rdbuf() << "\nPress enter to continue...\n";
        cin.get();
    }
    else {
        cout << "Could not open text file\n";
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

void buildPaths(string base)
{
    CHOICE = base + CHOICE;
    CHOICE_0 = base + CHOICE_0;
    CHOICE_1 = base + CHOICE_1;
    CHOICE_2 = base + CHOICE_2;
    CHOICE_3 = base + CHOICE_3;
    CHOICE_4 = base + CHOICE_4;
    CHOICE_5 = base + CHOICE_5;
    CHOICE_6 = base + CHOICE_6;
    CHOICE_7 = base + CHOICE_7;
    CHOICE_8 = base + CHOICE_8;
    CHOICE_9 = base + CHOICE_9;
    CHOICE_10 = base + CHOICE_10;
    CHOICE_11 = base + CHOICE_11;
    CHOICE_12 = base + CHOICE_12;
    CHOICE_13 = base + CHOICE_13;
    CHOICE_14 = base + CHOICE_14;
    CHOICE_15 = base + CHOICE_15;
    CHOICE_16 = base + CHOICE_16;
    CHOICE_17 = base + CHOICE_17;
}
