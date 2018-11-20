#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;
#include "Guess.h"



Guess::Guess() // first constructor(default)
{
	srand(time(NULL));
	int g = rand() % 3;
	if (g == 0)
		guess = 'S';
	else if (g == 1)
		guess = 'R';
	else
		guess = 'P';
	
}

Guess::Guess(char arg) // second constructor
{
	if (arg == 'R' || arg == 'r' || arg == 'P' || arg == 'p')
		guess = toupper(arg);
	else
		guess = 'S';
}

Guess::Guess(int arg) // third constructor
{
	if (arg = 0) {
		guess = 'R';
	}

	else if (arg = 1) {
		guess = 'P';
	}

	else {
		guess = 'S';
	}	
}

int Guess::compare(const Guess &other) const // compare function
{
	if (guess == other.guess)
		return 0;
	else if ((guess == 'P' && other.guess == 'S') ||
		(guess == 'R' && other.guess == 'P') || (other.guess == 'R' && guess == 'S')
		)
		return 1;
	return -1;
}

Guess::~Guess()
{
}
