#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstring>
//#include "characterSheet.h"

using namespace std;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


//Method Forwards 
void load();
void intro();
void menu();
void txtDsplay(string text);

int nameMax = 20;
int barrioMax = 30;

class userName {
	//Please Migrate me to characterSheet.h
	private:
		char myName[nameMax] = '\0';
		char myBarrio[barrioMax] = '\0';
	public:
		userName();
		~userName();
		/////Accessors
		const char* getmyName() const;
		const char* getmyBarrio() const;
		/////Mutators
		bool setmyName(const char*);
		bool setmyBarrio(const char*);
		////////////////
		
	};

//////////////////////MAIN IS UNDERNEATH ///////////////////////
int main() {

	menu();
	//characterSheet firstClass;

	return 0;
}
/////////////////////MAIN ENDS FRIENDS /////////////////////////





void menu() {
	cout << "A Diego'n Tonitosoft game (n' Sometimes Chon N RARELY jenny).... \n \n \n \n";
	cout << " Homie_Man \n";
	cout << " \n \n \n";
	cout << "(1) - New Game \n \n";
	cout << "(2) - Load Game \n \n";
	cout << "(3) - Settings \n \n";

	int input;

	cin >> input;

	if (input == 1) {
		intro();
	};

	if (input == 2 or input == 3)
	{
		load();

	};


};
void intro() {
	//Intro begins, (only onFirstRun !!)
	//Ask for User Name
	char mn[nameMax] = '\0';
	cout << "whats your name foo\n";
	cin >> mn;
	//for (int i=0; i<20; i++){
	//	mn[i];
	//}
	setmyName(mn);
	

	//Ask for Barrio (Clan) Name...
	char userBarrio[barrioMax] = '\0';
	cout << "Where you from foo?" << endl;
	cin >> userBarrio;
	setmyBarrio(userBarrio);
	//userName inputBarrio(userBarrio);

	getBarrio();
	cout << "Ay foo I hate " << getmyBarrio() << "!\n";
	cout << "\n \n \n";

	cout << "\n \n ANDALE VATO!";
	//enemies.badVato(1);
	//can load level 1 bad vato into attack sequence
	string strVal1 = "badVato";
	int vatoVal = 1;



	//attackSequence(strVal1, vatoVal);



};
void load() {
	cout << "Feature COMING SOON!\n \n";
	menu();
};

////constructor/destructor
userName::userName
{
	myName[0] = '\0';
	myBarrio[0] = '\0';
}
userName::~userName
{
	myName[0] = '\0';
	myBarrio[0] = '\0';
}

/////////accessors
const char* userName::getmyName() const{
	return(myName);
}
const char* userName::getmyBarrio() const{
	return(myBarrio);
}

/////////mutators
bool userName::setmyName(const char* mn){
	strcpy(myName, mn);
	return(true);
}
bool userName::setmyBarrio(const char* mb){
	strcpy(myBarrio, mb);
	return(true);
}