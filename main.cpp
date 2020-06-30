/*
BashSlide by James Apps, GPL v2
*/

#include <iostream>
#include <fstream>
using namespace std;

const string CHOICE = "./texts/choices.txt";
const string CHOICE_0 = "./texts/0LinuxIntro.txt";
const string CHOICE_1 = "./texts/1BasicCommands.txt";
const string CHOICE_2 = "./texts/2GettingMoreInfo.txt";
const string CHOICE_3 = "./texts/3Directories.txt";
const string CHOICE_4 = "./texts/4FileLists.txt";
const string CHOICE_5 = "./texts/5Permissions.txt";
const string CHOICE_6 = "./texts/6FindFile.txt";
const string CHOICE_7 = "./texts/7FileHandling.txt";
const string CHOICE_8 = "./texts/8WildcardsRegExp.txt";
const string CHOICE_9 = "./texts/9IOredirection.txt";
const string CHOICE_10 = "./texts/10SearchingFileContent.txt";
const string CHOICE_11 = "./texts/11CommandAlias.txt";
const string CHOICE_12 = "./texts/12Sudo.txt";
const string CHOICE_13 = "./texts/13CommandHistory.txt";
const string CHOICE_14 = "./texts/14EnvironmentVariables.txt";
const string CHOICE_15 = "./texts/15ProcessesAndJobs.txt";
const string CHOICE_16 = "./texts/16SchedulingJobs.txt";
const string CHOICE_17 = "./texts/17PackageInstallation.txt";

void showMenu();
void choose(int* choice);
int handleInput(int* choice);
void handleChoice(int* choice, string path);

int main() {

    int choice = -1;

    while(handleInput(&choice) > 0){
        choose(&choice);
    }

    return 0;
}

void showMenu(){
    cout << "Enter a number 1-17 to view one of the following (other values or letters to quit)\n";
    ifstream menu (CHOICE);
	if (menu.is_open())
		cout << menu.rdbuf();
	else
		cout << "Could not open Menu text file\n";
}

int handleInput(int* choice){
    showMenu();
    cin >> *choice;
    while(isspace(*choice)){
        cin >> *choice;
    }
    cin.get();  //clears ENTER
    if (*choice > 0 && *choice < 18){
        return *choice;
    }
    return -1;
}

void handleChoice(int* choice, string path){
    ifstream screen (path);
    if (screen.is_open()){
        cout << screen.rdbuf() << "\nPress enter to continue...\n";
        cin.get();
    }
    else {
        cout << "Could not open text file\n";
    }
}


void choose(int* choice){
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
        case 12: {
            handleChoice(choice, CHOICE_12);
        }
        case 13: {
            handleChoice(choice, CHOICE_13);
        }
        case 14: {
            handleChoice(choice, CHOICE_14);
        }
        case 15: {
            handleChoice(choice, CHOICE_15);
        }
        case 16: {
            handleChoice(choice, CHOICE_16);
        }
        case 17: {
            handleChoice(choice, CHOICE_17);
        }
    }
}
