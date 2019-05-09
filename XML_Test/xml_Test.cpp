#include <iostream> 
#include "C:\Users\macias\source\repos\Sichno\Homie_Man\Pugixml\pugixml.hpp"
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;

//Data_To_Dialogue will ask this function (Xml_Dialogue)
//to parse xml for dialogue, it will then hand it back to to Data_Dialogue
//Which in turn hands it off to the main.cpp


int main()
{
// Read attribute value
pugi::xml_attribute attr;
if (attr = selectedNode.attribute("intVal")) // attribute really exists
{
	// Read value as string
	std::cout << "read as string: intVal=" << attr.value() << std::endl;
     // Read value as int
	int intVal = attr.as_int();
	std::cout << "read as int   : intVal=" << intVal << std::endl;
     // for other types use as_double, as_bool, as_uint, ...
 }
}