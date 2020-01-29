#include "athlete.h"
#include "runner.h"
#include "jumper.h"
#include "thrower.h"
#include "trainer.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

string cg = "\033[33m"; 	// Terminal colour escape sequence (gold)
string cw = "\033[37m"; 	// (grey-white)
string cb = "\033[36;4m"; 	// (blue)
string cl = "\033[32m"; 	// (lime)
string cr = "\033[31m";		// (red)
string c0 = "\033[0m"; 		// Reset Terminal colour

extern void runningEvent(vector<athlete*> runners);
extern void jumpingEvent(vector<athlete*> jumpers);
extern void throwingEvent(vector<athlete*> throwers);


// prints runner details
void printRunner(athlete * Runner) {
	cout << cw << "Name: "+Runner->getName()+", Sport: " << Runner->getRole() 
	+", Gender: " << Runner->getGender()+ ", ID: " << Runner->getID() 
	<< ", Speed: " << Runner->getLevel() << c0 << endl;
}

// prints jumper details
void printJumper(athlete * Jumper) {
    	cout << cw << "Name: "+ Jumper->getName() + ", Sport: " << Jumper->getRole() 
	+ ", Gender: " << Jumper->getGender() + ", ID: " << Jumper->getID() 
	<< ", Agility: " << Jumper->getLevel() << c0 << endl;
}

// prints thrower details
void printThrower(athlete * Thrower) {
	cout << cw << "Name: " + Thrower->getName()+ ", Sport: " << Thrower->getRole() 
	+ ", Gender: " << Thrower->getGender() + ", ID: " << Thrower->getID() 
	<< ", Strength: " << Thrower->getLevel() << c0 << endl;
}

// prints trainer details
void printTrainer(athlete * Trainer) {
	cout << cw << "Name: " + Trainer->getName()+ ", Role: " << Trainer->getRole()
	+ ", Gender: " << Trainer->getGender() + ", ID: " << Trainer->getID()
	<< ", Years of experience: " << Trainer->getLevel() << c0 << endl;
}

// main function
int main() {
	int athleteID;
	string sport;
	string option;
	string option1;
	int option2;
	vector<athlete*> runners;
	vector<athlete*> jumpers;
	vector<athlete*> throwers;
	vector<athlete*> trainers;
	runner *r1 = nullptr;
	jumper *j1 = nullptr;
	thrower *t1 = nullptr;
	trainer *tr1 = nullptr;

	cout << endl;


	// welcome screen
	cout << "Welcome to our program! In this program, you can create athletes that play 1 of 3 different sports: "
	<< "running, jumping, or throwing. You will also create trainers for your athletes to improve their skill level. "
	<< "You can also have your athletes compete against each other in their own respective sports! Please follow the "
	<< "instructions you are given, and we hope you enjoy our program!" << endl;
	cout << endl;
	cout << "For the program, type only what's in the brackets at the end." << endl;
	cout << endl;

	while (1) {
		cout << "Are you ready? (Y/N): ";
		cin >> option;
		cout << endl;
		if (option == "Y" || option == "y") {
			cout << "Great, let's begin!" << endl;
			cout << endl;
			break;
		} else if (option == "N" || option == "n") {
			cout << "Oh. Be a lot cooler if you were." << endl;
			cout << endl;
		} else {
			cout << "Error: please enter Y or N." << endl;
			cout << endl;
		}

	}

	cout << "Firstly, let's create some athletes. Feel free to create as many as you want. You can also opt out"
	<< " of creating an athlete by typing 'c'." << endl;
	cout << endl;

	// athlete creation 
	while(1) {
	    cout << "To create an athlete, enter a specialised sport (Running, Jumping, Throwing), or type 'c' to cancel: ";
	    cin >> sport;
	    cout << endl;
	    if (sport == "Running" || sport == "running" || sport == "r") {
			r1 = new runner();
			athleteID = r1->getID();
			runners.push_back(r1);
			printRunner(runners[athleteID]);
	    } else if (sport == "Jumping" || sport == "jumping" || sport == "j") {
	    	j1 = new jumper();
	    	athleteID = j1->getID();
	    	jumpers.push_back(j1);
	    	printJumper(jumpers[athleteID]);
	    } else if (sport == "Throwing" || sport == "throwing" || sport == "t") {
	    	t1 = new thrower();
	    	athleteID = t1->getID();
	    	throwers.push_back(t1);
	    	printThrower(throwers[athleteID]);
	    } else if (sport == "Cancel" || sport == "cancel" || sport == "c") {
	    	break;
	    } else {
		cout << cr << "Error" << c0 << ": please enter a valid sport." << endl;
	    }
	    cout << endl;
	//     while(1) {							// IF YES OR NO FOR NEW ATHLETE
	// 	cout << "Would you like to create an athlete? (Y/N): ";
	// 	cin >> option;
	// 	cout << endl;
	// 	if (option == "N" || option == "n") {
	// 		break;
	// 	} else if (option == "Y" || option == "y") {
	// 		break;
	// 	} else {
	// 		cout << cr << "Error" << c0 << ": please enter Y or N." << endl;
	// 		cout << endl;
	// 	}
	//     }
	}


	// allows users to view athletes they have created
	cout << "Would you like to view your created athletes? (Y/N): ";
	cin >> option;

	while(1) {
		if (option == "N" || option == "n") {
			break;
		} else if (option == "Y" || option == "y") {
			cout << endl;
			if (runners.size() < 1) {
				cout << "You have not created any runners." << endl;
			} else {
				cout << "Your runners are: " << endl;
				for (int i = 0; i < runners.size(); i++) {
					printRunner(runners[i]);
				}
			}
			cout << endl;
			if (jumpers.size() < 1) {
				cout << "You have not created any jumpers." << endl;
			} else {
				cout << "Your jumpers are: " << endl;
				for (int i = 0; i < jumpers.size(); i++) {
					printJumper(jumpers[i]);
				}
			}
			cout << endl;
			if (throwers.size() < 1) {
				cout << "You have not created any throwers." << endl;
			} else {
				cout << "Your throwers are: " << endl;
				for (int i = 0; i < throwers.size(); i++) {
					printThrower(throwers[i]);
				}
			}
			cout << endl;
			while(1) {
				cout << "Would you like to view your created athletes again? (Y/N): ";
				cin >> option;
				if (option == "N" || option == "n") {
					break;
				} else if (option == "Y" || option == "y") {
					break;
				} else {
					cout << endl << cr << "Error" << c0 << ": please enter Y or N." << endl;
					cout << endl;
				}
			}
		} else {
			cout << endl << cr << "Error" << c0 << ": please enter Y or N." << endl;
			cout << endl;
			cout << "Would you like to view your created athletes? (Y/N): ";
			cin >> option;
		}
	}

	// trainer creation
	cout << endl;
	cout << "Our athletes are going to need some trainers." << endl;
	cout << endl;
	cout << "Please create 3 trainers." << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		trainers.push_back(new trainer());
		athleteID = trainers[i]->getID();
		printTrainer(trainers[athleteID]);
		cout << endl;
	}

	// allows users to view created trainers
	cout << "Would you like to view the trainers you have created? (Y/N): ";

	while (1) {
		cin >> option;
		cout << endl;
		if (option == "N" || option == "n") {
			break;
		} else if (option == "Y" || option == "y") {
			cout << "Your trainers are: " << endl;
			for (int i = 0; i < trainers.size(); i++) {
				athleteID = trainers[i]->getID();
				printTrainer(trainers[athleteID]);
			}
			cout << endl;
			cout << "Would you like to view your trainers again? (Y/N): ";
		} else {
			cout << cr << "Error" << c0 << ": please enter Y or N." << endl;
			cout << endl;
			cout << "Would you like to view the trainers you have created? (Y/N): ";
		}
	}

	// training athletes
	cout << "Would you like to train your athletes? (Y/N): ";

	while (1) {
		cin >> option;
		cout << endl;
		if (option == "n" || option == "N") {
			break;
		} else if (option == "y" || option == "Y") {
			cout << "Here are a list of your trainers: " << endl;
			for (int i = 0; i < trainers.size(); i++) {
			 	cout << i+1 << ". ";
			 	printTrainer(trainers[i]);
			}
			cout << endl;
			cout << "Choose a trainer. (1, 2 or 3): ";
		 	while (1) {
		 		cin >> option2;
		 		if (option2 == 1 || option2 == 2 || option2 == 3) {
		 			break;
		 		// can only take numerical values when selecting a trainer
		 		} else if (cin.fail()) {
					cin.clear();
					cin.ignore();
					cout << cr << endl << "Error" << c0 << ": please enter a numerical value." << endl;
			 		cout << endl;
			 		cout << "Choose a trainer. (1, 2 or 3): ";
				}
				else {
			 		cout << endl << "Please enter 1, 2, or 3 only." << endl;
			 		cout << endl;
			 		cout << "Choose a trainer. (1, 2 or 3): ";
			 	}
		 	}
			 cout << endl;
			 cout << "Which sports' athletes would you like " +trainers[option2-1]->getName()+ " to train? (Runners, Jumpers, Throwers): ";
			 while (1) {
			 	cin >> option1;
			 	cout << endl;
			 	if (option1 == "Running" || option1 == "running" || option1 == "r" || option1 == "runners") {
			 		if (runners.size() < 1) {
			 			cout << cr << "Error" << c0 << ": there are no runners to train!" << endl;
			 			cout << endl;
			 			cout << "Would you like to train your athletes again? (Y/N): ";
			 		} else {
			 			for (int i = 0; i < runners.size(); i++) {
			 				trainers[option2-1]->train(runners.at(i));
				 			printRunner(runners.at(i));
			 			}
			 			cout << endl;
			 			cout << "Would you like to train your athletes again? (Y/N): ";
			 		}
		 			break;
		 		} else if (option1 == "Jumping" || option1 == "jumping" || option1 == "j" || option1 == "jumpers") {
		 			if (jumpers.size() < 1) {
		 				cout << cr << "Error" << c0 << ": there are no jumpers to train!" << endl;
		 				cout << endl;
		 				cout << "Would you like to train your athletes again? (Y/N): ";
		 			} else {
			 			for (int i = 0; i < jumpers.size(); i++) {
			 				trainers[option2-1]->train(jumpers.at(i));
				 			printJumper(jumpers.at(i));
				 		}
				 		cout << endl;
				 		cout << "Would you like to train your athletes again? (Y/N): ";
				 	}
			 		break;
		 		} else if (option1 == "Throwing" || option1 == "throwing" || option1 == "t" || option1 == "throwers") {
		 			if (throwers.size() < 1) {
		 				cout << cr << "Error" << c0 << ": there are no throwers to train!" << endl;
		 				cout << endl;
		 				cout << "Would you like to train your athletes again? (Y/N): ";
		 			} else {
			 			for (int i = 0; i < throwers.size(); i++) {
			 				trainers[option2-1]->train(throwers.at(i));
			 				printThrower(throwers.at(i));
			 			}
			 			cout << endl;
			 			cout << "Would you like to train your athletes again? (Y/N): ";
			 		}
			 		break;
			 	} else {
			 		cout << cr << "Error" << c0 << ": please enter a valid sport." << endl;
			 		cout << endl;
			 		cout << "Which athletes would you like " +trainers[option2-1]->getName()+ " to train? (Runners, Jumpers, Throwers): ";
			 	}
			}
		} else {
			cout << cr << "Error" << c0 << ": please enter Y or N." << endl;
			cout << endl;
			cout << "Would you like to train your athletes? (Y/N): ";
		}
	}

	// run events with created athletes
	cout << "Would you like to run some events with the athletes you created? (Y/N): ";

	while (1) {
		cin >> option1;
		cout << endl;
		if (option1 == "N" || option1 == "n") {
			break;
		} else if (option1 == "Y" || option1 == "y" ) {
			cout << "Which sport would you like to run an event for? (Running, Jumping or Throwing): ";
			while (1) {
				cin >> option1;
				cout << endl;
				if (option1 == "Running" || option1 == "running" || option1 == "r" || option1 == "runners") {
					if (runners.size() < 1) {
						cout << cr << "Error" << c0 << ": you can't run an event with no runners!" << endl;
					} else {
						runningEvent(runners);
					}
					cout << endl;
					cout << "Would you like to run another event? (Y/N): ";
					break;
				} else if (option1 == "Jumping" || option1 == "jumping" || option1 == "j" || option1 == "jumpers") {
					if (jumpers.size() < 1) {
						cout << cr << "Error" << c0 << ": you can't run an event with no jumpers!" << endl;
					} else {
						jumpingEvent(jumpers);
					}
					cout << endl;
					cout << "Would you like to run another event? (Y/N): ";
					break;
				} else if (option1 == "Throwing" || option1 == "throwing" || option1 == "t" || option1 == "throwers") {
					if (throwers.size() < 1) {
						cout << cr << "Error" << c0 << ": you can't run an event with no throwers!" << endl;
					} else {
						throwingEvent(throwers);
					}
					cout << endl;
					cout << "Would you like to run another event? (Y/N): ";
					break;
				} else {
					cout << cr << "Error" << c0 << ": please print a valid sport." << endl;
					cout << endl;
					cout << "Which sport would you like to run an event for? (Running, Jumping, Throwing): ";
				}
			}
		} else {
			cout << cr << "Error" << c0 << ": please enter Y or N." << endl;
			cout << endl;
			cout << "Would you like to run some events? (Y/N): ";
		}


	}

	cout << "Thanks for using our program! (Don't forget to like, comment and subscribe)" << endl;
	cout << endl;

	delete r1;
	delete j1;
	delete t1;
	delete tr1;
}