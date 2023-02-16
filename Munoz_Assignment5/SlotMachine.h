#pragma once
#include "Reel.h"
class SlotMachine
{
private:
	Reel reel[3];//Array of 3 instances of Reel class 

public:
	int play();
};

