#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
 
int main()
{
    char name[50];
    cout << "..." << endl;
    cout << "...." << endl;
    cout << "....." << endl;
    cout << "Hey foo, you're finally awake!" << endl;
    cout << "You were trying to get some tamales right?" << endl;
    cout << "Damn you Hood rats! The hood was fine until you came along." << endl;
    cout << "40's n ho's all day in the hood, until they came along" << endl;
    cout << "Ay Foo, whats your name anyways?" << endl;
    cin.getline(name, 50);
    cout << "You better book it fast, " << name << ". The Hood Rats are bound to come back." << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    _getch();
    return 0;
}