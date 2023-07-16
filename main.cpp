#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int choice;
    cout << "\t\t\t____________________________________________________________________________\n\n\n";
    cout << "\t\t\t                          Welcome to the Login page                      \n\n\n";
    cout << "\t\t\t__________________________         MENU         ____________________________\n\n\n";
    cout << "                                                                                   \n\n";
    cout << "\t | Press 1 to LOGIN                        |" << endl;
    cout << "\t | Press 2 to REGISTER                     |" << endl;
    cout << "\t | Press 3 to if you forgot your PASSWORD  |" << endl;
    cout << "\t | Press 4 to EXIT                         |" << endl;
    cout << "\n\t\t\t Please enter your choice : ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
                login();
                break;
        case 2:
                registration();
                break;
        case 3:
                forgot();
                break;
        case 4:
                cout << "\t\t\t Thank you! \n\n";
                break;
        default:
                system("cls");
                cout << "\t\t\t Please select from the options given above \n" << endl;
                main();
    }
}

void login()
{
    int count;
    string userId, passWord, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the username and password : " << endl;
    cout << "\t\t\t USERNAME : ";
    cin >> userId;
    cout << "\t\t\t PASSWORD : ";
    cin >> passWord;
    
}