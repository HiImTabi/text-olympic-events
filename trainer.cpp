#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "athlete.h"
#include "trainer.h"
using namespace std;

extern string cl;
extern string c0;

// initialize trainID
int trainer::trainID = 0;

// trainer constructor
trainer::trainer() {
	srand(time(0));
	trainLevel = 5 + (rand() % 15);
	trainerID = trainID;
	trainID++;
}

// returns trainer's years of experience
int trainer::getLevel() {
	return trainLevel;
}

// returns trainer ID
int trainer::getID() {
	return trainerID;
}

// returns trainer's role
string trainer::getRole() {
	return "Trainer";
}

// set trainer's experience
void trainer::setLevel(int Level) {
	trainLevel = Level;
}

// increases athlete's skill level using trainer
void trainer::train(athlete * tAthlete) {
	// skill level can't go above 100
	if (tAthlete->getLevel() >= 100) {
		cout << "This athlete has already reached max skill level" << endl;
		return;
	} else {
	// increase skill level based on how many years of experience trainer has
		int Level = tAthlete->getLevel();
		int increase = (trainLevel/2) - (rand()%(trainLevel/2));
	// can't increase skill level above 100
		if (Level + increase > 100) {
			tAthlete->setLevel(100);
			cout << "This athlete has reached max skill level";
		} else {
			tAthlete -> setLevel(Level + increase);
		}
	// prints increase in skill level 
		cout << cl << "Success!" << c0 << " You have increased " << tAthlete->getName() << "'s skill level from " << Level << " to " << tAthlete->getLevel() << "." << endl;
		cout << endl;
	}
}

// trainer destructor
trainer::~trainer() {

}