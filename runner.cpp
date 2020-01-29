#include "athlete.h"
#include "runner.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// initialising runID
int runner::runID = 0;

// default runner constructor
runner::runner() {
	srand(time(0));
	runLevel = 1 + rand()%10;
	runnerID = runID;
	runID++;
}

// returns runner skill level
int runner::getLevel() {
	return runLevel;
}

// returner runner ID
int runner::getID() {
	return runnerID;
}

// returns sport of runner
string runner::getRole() {
	return "Runner";
}

// set level of runner
void runner::setLevel(int Level) {
	runLevel = Level;
}

// runner destructor
runner::~runner() {

}