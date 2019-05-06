#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
 //This is the start of diego's main menu program using cout to print and getch to pause each line 
 //requiring user input to continue. endl start a new line, it can be doubled up like << endl << endl;
 //
int main()
{
    char p_name[50];
    cout << "..." << endl;
    _getch();
    cout << "...." << endl;
    _getch();
    cout << "....." << endl;
    _getch();
    cout << "Hey foo, you're finally awake!" << endl;
    cout << "You were trying to get some tamales right?" << endl;
    _getch();
    cout << "Damn you Hood rats! The hood was fine until you came along." << endl;
    cout << "40's n ho's all day in the hood, until they came along..." << endl;
    _getch();
    cout << "Ay Foo, whats your name anyways?" << endl;
    cin.getline(p_name, 50);
    cout << "You better book it fast, " << p_name << ". The Hood Rats are bound to come back." << endl;
    _getch();
    cout << "There, grab that shank there! Hurry before they come back!" << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    _getch();
// the next string copied from "whitenite1" from "cplusplus.com" forums slows print speed shown to the user
// using the Sleep command brought in by the <windows.h> header. Hopefully a better system will come up soon.
    string hello = string("Hello ") + p_name + string(" Let's get\nprogramming in C++");
int x=0;
while ( hello[x] != '\0')
{
	cout << hello[x];
	Sleep(150);
	x++;
};
	cout << "\n\nEnd of message.." << endl << endl;
	return 0;
}