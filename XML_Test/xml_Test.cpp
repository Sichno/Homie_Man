#include <iostream> 
#include "C:\Users\macias\source\repos\Sichno\Homie_Man\Pugixml\pugixml.hpp"
#include <stdlib.h>
#include <chrono>
#include <thread>
//#include <Windows.h>

using namespace std;

int main()

{

string hello = string("This is a test");

int x=0;

while ( hello[x] != '\0')

	{
		cout << hello[x];
		std::this_thread::sleep_for (std::chrono::nanoseconds(99999999));
	x++;
	};
	
	return 0;
}