// program awards points for the number of bike rides to campus submitted
#include <iostream>
using namespace std;
 
int main()
{ 
	int userInput;  // variable used for user's input, assuming it will be an integer

	cout << "Enter the number of bike rides you took this semester: ";
	cin >> userInput;

	while (userInput < 0)   // checks for if a number is negative before giving output (input validation)
	{
	    cout << "Number must be between 0 and 5." << endl
		<< "Please re-enter your number." << endl;
	    cin  >> userInput;
	}

	if (userInput == 0)   // gives user 0 points for 0 bike rides
		{ cout << "You earned 0 points this semester" << endl; }

	else if (userInput == 1)  // gives user 3 points for 1 bike ride
		{ cout << "You earned 3 points this semester" << endl; }

	else if (userInput == 2)  // gives user 10 points for 2 bike rides
		{ cout << "You earned 10 points this semester" << endl; }

	else if (userInput == 3)  // gives user 15 points for 3 bike rides
		{ cout << "You earned 15 points this semester" << endl; }

	else if (userInput == 4)  // gives user 30 points for 4 bike rides
	    { cout << "You earned 30 points this semester" << endl; }

	else if (userInput >= 5)  // gives user 50 points for 5 or more bike rides
	    { cout << "You earned 50 points this semester" << endl; }

	return 0;
}
