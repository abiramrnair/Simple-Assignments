#include "Human.h"
#include <string>


Guess Human::getGuess() const
{
	char choice;
	cout << "Enter your guess (R/P/S): ";
	cin >> choice;

	Guess value(choice);
	return value;
}

Human::~Human()
{
}
