// WKOnePhoneCall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Description: This program will receive day (as 2 char abbreviation), time (hour:min), and length of the call in minutes for any number of calls 
//				input. The program will display the information for the call and calculate cost of each call and the total cost for all calls.

#include<iostream>
using namespace std;

int main()
{
	int calls;
	float bill;
	cout << "Enter number of calls : ";
	cin >> calls;

	if (calls <= 100)
		bill = 200;
	else if (calls > 100 && calls <= 150)
	{
		calls = calls - 100;
		bill = 200 + (0.60 * calls);
	}
	else if (calls > 150 && calls <= 200)
	{
		calls = calls - 150;
		bill = 200 + (0.60 * 50) + (0.50 * calls);
	}
	else
	{
		calls = calls - 200;
		bill = 200 + (0.60 * 50) + (0.50 * 50) + (0.40 * calls);
	}

	cout << " Your bill is $" << bill;


	return 0;
}








// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
