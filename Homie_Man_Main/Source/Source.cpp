#include <iostream>
#include <string>
#include <thread>
#include <chrono>
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

/*
void attackSequence(string enemy, int level) {
	//On attackSequence(enemies.badVato("Feeble Vato", 1)), can pass through String and 1 int

	//STARTS ATTACK
	//string enemy = enemy;
	int enemyLevel = level;
	cout << " Aguas! You have been ambushed by an angry " << enemy << " !!!! \n \n";
	int damage(int x) {
		int val;
		int returnVal;

		returnVal = hp;

		val = x - hp;
		hp = val;
		returnVal = returnVal - hp;
		cout << "Wow " << " did " << returnVal << " damage!"; 
	}
}
*/


class userName {
	//Please Migrate me to characterSheet.h
	public:
		//Username of Character
		userName(string z) {
			setName(z);
		}
		void setName(string x) {
			myName = x;
		}
		string getName() {
			return myName;
		}
		//Characters Barrio Information
		void inputBarrio(string barrioVal) {
			//Grabs the string, and sends to setBarrio
			setBarrio(barrioVal);
		}
		void setBarrio(string y) {
			myBarrio = y;
		}
		string getBarrio() {
			return myBarrio;
		}
	private:
		string myName;
		string myBarrio;
		int hp = 100;
		int atk = 5;
		int def = 5;
	
};



void intro() {
	cout << "whats your name foo" << endl;
	string myName;
	cin >> myName;
	userName test(myName);
	//cout << test.getName();

	cout << "Where you from foo?" << endl;
	string userBarrio;
	cin >> userBarrio;
	userName inputBarrio(userBarrio);

	cout << "Ay foo I hate Barrio ";
	userName getBarrio();
	cout << "\n \n \n";
	//cout << test2.getName();

	cout << "\n \n ANDALE VATO!";
	//enemies.badVato(1);
	//can load level 1 bad vato into attack sequence
	string strVal1 = "badVato";
	int vatoVal = 1;



	//attackSequence(strVal1, vatoVal);



};


void menu() {
	cout << "A Diego'n Tonitosoft game (n' Sometimes Chon).... \n \n \n \n";
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

void load() {
	cout << "Feature COMING SOON!\n \n";
	menu();
};

int main() {

	//intro();
	menu();
	//characterSheet firstClass;


	return 0;
}