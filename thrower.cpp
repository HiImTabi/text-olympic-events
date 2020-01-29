#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "athlete.h"
#include "thrower.h"
using namespace std;

// initializing thrower ID
int thrower::throwID = 0;


// default thrower constructor
thrower::thrower() {
	srand(time(0));
	throwLevel = 1 + rand()%10;
	throwerID = throwID;
	throwID++;
}

// returns thrower skill level
int thrower::getLevel() {
	return throwLevel;
}

// returns thrower ID
int thrower::getID() {
	return throwerID;
}

// returns role of thrower
string thrower::getRole() {
	return "Thrower";
}

// set skill level of thrower
void thrower::setLevel(int Level) {
	throwLevel = Level;
}

// thrower destructor
thrower::~thrower() {
	
}