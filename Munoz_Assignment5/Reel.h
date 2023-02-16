#pragma once
#include <string>
using namespace std;

class Reel
{
private:
	string faces[20] = { "lemon","cherry","banana","seven","diamond","bell","queen","jack","joker",
		"king","orange","pear","heart","star","strawberry","grape","bell","horseshoe","heart","10" };
	string  seletecdFace;
	int position;


public:
	Reel();
	Reel(string faces);
	void spin(); 
	string getFace();
	int getPosition();
};

