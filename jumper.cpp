#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "athlete.h"
#include "jumper.h"
using namespace std;

// initializing jumpID
int jumper::jumpID = 0;

// default jumper constructor
jumper::jumper() {
	srand(time(0));
	jumpLevel = 1 + rand()%10;
	jumperID = jumpID;
	jumpID++;
}

// return jumper skill level
int jumper::getLevel() {
	return jumpLevel;
}

// returns jumper ID
int jumper::getID() {
	return jumperID;
}

// returns role of jumper
string jumper::getRole() {
	return "Jumper";
}

// set skill level of jumper
void jumper::setLevel(int Level) {
	jumpLevel = Level;
}

// jumper destructor
jumper::~jumper() {

}