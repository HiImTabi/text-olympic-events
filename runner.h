#ifndef RUNNER_H
#define RUNNER_H

#include "athlete.h"
#include <iostream>
#include <string>
using namespace std;


// implementing runner class (child of athlete)
class runner : public athlete {
private:
	// runID tracks number of runners created
	static int runID;
	// runner skill level
	int runLevel;
	// tracks when runner was created
	int runnerID;
public:
	runner();
	~runner();

	int getLevel();
	int getID();
	string getRole();
	void setLevel(int Level);
};

#endif