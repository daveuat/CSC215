// The line below is declaring the library used.
#include <iostream>
// Using namespace "std" since we will use cout and endl a lot most likely.
using namespace std;

// Main Function to start program.
// Must have 1 but no more.
int main()
{
	// Displaying opening message to the user.
	cout << "Are you ready to play?" << endl;
	// Setting variable for user inputed data.
	string x;
	// Asking the user for the number of players.
	cout << "You are lost in the woods. Which way do you want to go? N,S,E,W? " << endl;
	// Storing number to the variable 'x'.
	cin >> x;
	// Display users choice to the screen by utilizing if and else if statements.
	if (x == "n" or x == "N" or x == "North" or x == "north")
	{
		cout << "You went " << x << " and fell off a cliff." << endl;
		cout << "Game over!" << endl;
	}
	else if (x == "s" or x == "S" or x == "South" or x == "south")
	{
		cout << "You went " << x << " and fell into a piranha infested river." << endl;
		cout << "Game over!" << endl;
	}
	else if (x == "w" or x == "W" or x == "West" or x == "west")
	{
		cout << "You went " << x << " and a tree fell on you." << endl;
		cout << "Game over!" << endl;
	}
	else if (x == "e" or x == "E" or x == "East" or x == "east")
	{
		cout << "You went " << x << " a squirrel threw an acorn at you and knocked you out." << endl;
		cout << "Game over!" << endl;
	}
	// Else statement for anything input by the user that doesn't match whats above.
	else
	{
		cout << "You don't know what to do and parish from not having water. Game over!" << endl;
	}
	// End the function with return 0 to show the program executed successfully.
	return 0;
}