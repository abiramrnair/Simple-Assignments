#pragma once
#include <iostream>
using namespace std;
#include <cstdlib>

class Guess
{
private:
	char guess;
public:
	Guess();
	Guess(char);
	Guess(int);
	int compare(const Guess &other) const;
	char getGuess() {return guess;};
	~Guess();
};

