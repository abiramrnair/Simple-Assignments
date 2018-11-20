#include <iostream>
#include "Guess.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

int main(int argv, char *argc[]) { // to be done after all classes are done

	cout << "Player name: ";
	string p1name;
	cin >> p1name;


	Human p1(p1name); // Create Human player
	Computer p2; // Create Computer Player

	cout << "Current Standings" << endl;
	cout << p1.getName() << ": " << p1.getScore() << endl;
	cout << "Computer: " << p2.getScore() << endl;

	bool counter = true;

	while(counter) // while loop to keep program going
	{
		Guess humGuess = p1.getGuess(); // Creating variables so you can compare in the compare funct.
		Guess compGuess = p2.getGuess();
		
		cout << p1.getName()<<": " << humGuess.getGuess() << " Computer: " << compGuess.getGuess() << endl;
		
		int compareValue = humGuess.compare(compGuess);		

		if (compareValue == 1) // if computer wins
		{

			--p2;
			cout << p1.getName() << ": " << p1.getScore() << " Computer: " << p2.getScore() << endl;
		}

		else if (compareValue == -1) // if human wins
		{
			--p1;
			cout << p1.getName() << ": " << p1.getScore() << " Computer: " << p2.getScore() << endl;
		}

		else // if they tie
			cout << p1.getName() << ": " << p1.getScore() << " Computer: " << p2.getScore() << endl;



		if (p1.getScore() == 0) {
			cout << p1.getName() << " won!" << endl;
			counter = false; // Loop ends
		}

		else if (p2.getScore() == 0) {
			cout << "Computer won!" << endl;
			counter = false; // Loop ends
		}

	}
	char c;
	cin >> c;
}