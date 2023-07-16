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
    cout << "\t\t\t____________________________________________________________________________\n\n";
    cout << "\t\t\t                          Welcome to the Login page                      \n\n";
    cout << "\t\t\t__________________________         MENU         ____________________________\n\n";
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
    
    ifstream input("records.txt");  //  will upload the inputted username and password to "records.txt"

    while(input >> id >> pass)      //
    {
        if(id == userId && pass == passWord)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if(count == 1)
    {
        cout << userId << "\n Your LOGIN is successful \n Thanks for logging in! \n";
        main();
    }
    else
    {
        cout << "\n LOGIN ERROR \n Please check your username and password \n";
        main();
    }

}

void registration()
{
    string ruserId, rpassWord, rid, rpass;
    system("cls");
    cout << "\t\t\t Enter the username: ";
    cin >> ruserId;
    cout << "\t\t\t Enter the password: ";
    cin >> rpassWord;

    ofstream f1("records.txt", ios::app); // will append input into file;
    f1 << ruserId << ' ' << rpassWord;
    system("cls");
    cout << "\n\t\t\t Registration is successful! \n";
    main();
}

void forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t You forgot the password? No worries \n";
    cout << "Press 1 to search for your id by username " << endl;
    cout << "Press 2 to go back to the main menu " << endl;
    cout << "\t\t\t Enter your choice: ";
    cin >> option;
    switch(option)
    {
        case 1:
            {
                int count = 0;
                string suserId, sId, spass;
                cout << "\n\t\t\t Enter the username you remember : ";
                cin >> suserId;
                ifstream f2("records.txt");
                while(f2 >> sId >> spass)       //check inside records.txt
                {
                    if(sId == suserId)
                    {
                        count = 1;
                    }
                }
                f2.close();
                if(count == 1)
                {
                    cout << "\n\n Your account has been found! \n";
                    cout << "\n\n Your password is " << spass;
                    main();
                }
                else
                {
                    cout << "Sorry, your account has not been found.";
                }
            }
        case 2:
            {
                main();
            }
        default:
            cout << "\t\t\t Wrong choice! Please try again " << endl;
            forgot();
    }
}