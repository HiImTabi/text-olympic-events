#ifndef TRAINER_H
#define TRAINER_H

#include <string>
#include <iostream>
#include "athlete.h"
using namespace std;

// creating trainer class, child of athlete class
class trainer : public athlete {
private:
	// trainID tracks number of trainers
	static int trainID;
	// randomly generated years of experience for trainer
	int trainLevel;
	// tracks when current trainer was created
	int trainerID;
public:
	trainer();
	~trainer();

	int getLevel();
	int getID();
	string getRole();
	void setLevel(int Level);
	void train(athlete * tAthlete);
};

#endif