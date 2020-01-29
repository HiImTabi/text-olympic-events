#ifndef ATHLETE_H
#define ATHLETE_H

#include <string>
using namespace std;


//implementing athlete abstract class
class athlete {
private:
	// all athletes will have a name, sport, and gender
	string Name;
	string Sport;
	bool Gender;
public:
	athlete();
	string getName();
	string getGender();
	~athlete();
	

	// virtual functions
	virtual int getLevel() = 0;
	virtual int getID() = 0;
	virtual string getRole() = 0;
	virtual void setLevel(int Level) = 0;
	virtual void train(athlete * tAthlete);
};

#endif