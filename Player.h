#pragma once
#include <string>

class Player
{
private:
	int score;
public:
	Player& operator--() {
		--score;
		return *this;
	};
	Player(int);
	const int getScore() {return score;};
	~Player();
};

