#include <iostream> 
#include <stdlib.h>
#include <chrono>
#include <thread>

//This handles the dialogue, when the 
//game asks for dialogue, this will ask XML parser to find the 
//Dialogue, it will convert it to str, then dialogue.cpp will 
//display it to main.

using namespace std;

int main()
{
string dialogue_var = string("This is a test");
int x=0;
while ( dialogue_var[x] != '\0')
	{
		cout << dialogue_var[x];
		this_thread::sleep_for (chrono::nanoseconds(99999999));
	x++;
	};	
	return 0;
}