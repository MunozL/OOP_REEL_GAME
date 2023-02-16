#include "SlotMachine.h"
#include <iostream>
using namespace std;
int SlotMachine::play()
{
	// for loop to iterate through array of Reel objects. Will spin and get face selected for each of them.
	for (int i = 0; i < 3; i++)
	{
		reel[i].spin();
		reel[i].getFace();
	}
	cout << " " << endl;

	bool winner = true;//boolean to decide if user wins 

	//If statement to compare if positions of all arrays are the same. 
	if (reel[0].getPosition() == reel[1].getPosition() &&
		reel[1].getPosition() == reel[2].getPosition() &&
		reel[0].getPosition() == reel[2].getPosition())
	{
		winner = true;
		if (winner) {
			cout << " " << endl;
			cout << "Winner!!!";
			cout << " " << endl;
		}
	}
	else
	{
		winner = false;
	}

	return winner;
}



