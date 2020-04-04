// Simple guessing game with a user defined range by Brent Hartley. //

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num;
    int guess;
    int limit;
    int guesses = 0;
    // Seed random number generator. //
	srand(time(0)); 
    // Choose the upper limit for the random number generator. //
    cout <<"I need you to decide the upper limit of the random number I will pick. A higher number makes the game more difficult : ";
    cin >> limit;

	num = rand() % limit; 
    // Generate random number between 1 and defined limit. //
	cout << "Guess My Number Game\n\n";
    // Start the game. //
	do
	{
		cout << "Enter a guess between 1 and " << limit << " : \n";
		cin >> guess;
		guesses++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << guesses << " guesses!\n";
	} while (guess != num);

	return 0;
}