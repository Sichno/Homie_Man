#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
 
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
    return 0;
}
