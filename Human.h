#pragma once
#include <iostream>
using namespace std;
#include "Guess.h"
#include "Player.h"
#include <string>

class Human:public Player
{
public:
	string name;
	operator string() {
		return name;
	}	
	Human(string arg, int score1 = 3) : Player(score1) { name = arg; }
	const string getName() { return name; };
	Guess getGuess() const;
	~Human();
};

