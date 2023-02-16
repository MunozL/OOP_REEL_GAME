// Munoz_Assignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lizette Munoz     185-900     2/16/23
// Assignment_5    

#include <iostream>
#include<string>
#include "Reel.h"
#include "SlotMachine.h"
using namespace std;
int main()
{
    SlotMachine slotMachine;//Instance of SlotMachine class
	int timesPlayed = 0;//counter 
	
		while (!slotMachine.play())//will continue to play until slotMachine.play() is true and users wins
		{
			slotMachine.play();
			timesPlayed++;
		}
	
		cout << "It took you " << timesPlayed << " times to win!" << endl;

		return 0;
}

