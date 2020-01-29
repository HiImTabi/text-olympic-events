#ifndef THROWER_H
#define THROWER_H

#include <iostream>
#include <string>
#include "athlete.h"
using namespace std;

// implementing thrower class (child of athlete)
class thrower : public athlete {
private:
	// throwID tracks number of throwers created
	static int throwID;
	// skill level of throwers
	int throwLevel;
	// tracks when thrower was created
	int throwerID;
public:
	thrower();
	~thrower();

	int getLevel();
	int getID();
	string getRole();
	void setLevel(int Level);
};

#endif