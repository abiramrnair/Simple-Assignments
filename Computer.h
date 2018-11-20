#pragma once
#include "Player.h"
#include "Guess.h"


class Computer:public Player
{
public:
	Computer(int score1=5) : Player(score1) {}
	~Computer();
	Guess getGuess() const;
};

