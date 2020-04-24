#pragma once

HELLO JENNY

class characterSheet {
	//Please Migrate me to characterSheet.h
public:
	characterSheet();
	userName(string z) {
		setName(z);
	}
	void setName(string x) {
		myName = x;
	}
	string getName() {
		return myName;
	}
	int damage(int x) {
		int val;
		int returnVal;

		returnVal = hp;

		val = x - hp;
		hp = val;
		returnVal = returnVal - hp;
		cout << "Wow " << /*enemy*/ " did " << returnVal << " damage!";
	}

private:
	string myName;
	int hp = 100;
	int atk = 5;
	int def = 5;
};