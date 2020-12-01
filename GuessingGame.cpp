// Week Two Guided Guesing Game
#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	const int DIVISOR = 10;
	srand((unsigned)time(NULL));
	int guess;
	int randomNumber = rand() % DIVISOR;
		cout << "I am thinking of a number from 0 through 9" << endl <<
		"Can you guess it? ";
	cin >> guess;
	cout << "your guess was " << guess << "and the random number was: " <<
		randomNumber << endl;
	if (guess == randomNumber)
		cout << "Exellent! You must have ESP!" << endl;
	else
		if(guess >= randomNumber - 2 && guess <= randomNumber + 2)
		cout << "Very Close!" << endl;
		else
			cout << "You were way off. Too Bad." << endl;

	return 0;
}