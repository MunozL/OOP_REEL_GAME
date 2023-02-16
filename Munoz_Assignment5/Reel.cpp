#include "Reel.h"
#include <time.h>
#include <iostream>
#include <iomanip>
Reel::Reel() { srand(time(0)); }


Reel::Reel(string faces)//Constructor with argument of string array(faces)
{
}

void Reel::spin() //Function to generate random #. Will assign to position
{
	position = rand() % 20;

}

string Reel::getFace()// getter to assigned array position to selectedFace and return it
{
	seletecdFace = faces[position];
	cout << left << setw(20) << seletecdFace; //set  output to left and width bt columns to 20

	return seletecdFace;
}

int Reel::getPosition()//getter to return position
{
	position = position;
	return position;
}
