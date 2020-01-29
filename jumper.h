#ifndef JUMPER_H
#define JUMPER_H

#include <iostream>
#include <string>
#include "athlete.h"
using namespace std;

class jumper : public athlete {
private:
	// jumpID tracks # of jumpers
	static int jumpID;
	// jumper skill level
	int jumpLevel;
	// tracks when jumper created
	int jumperID;
public:
	jumper();
	~jumper();

	int getLevel();
	int getID();
	string getRole();
	void setLevel(int Level);
};

#endif