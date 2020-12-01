// WKOneProjectsChapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x;
	int y;
	x = 10;
	y = 5;
	cout << "Results:\n";
	cout << "x = 10, y = 5" << endl;
	cout << "x=y+3\t" << "\t|" << "x=" << y + 3 << "\n";
	cout <<  "x=y-2\t" << "\t|" << "x=" << y - 2 << "\n";
	cout << "x=y*5\t" << "\t|" << "x=" << y * 5 << "\n";
	cout << "x=x/y\t" << "\t|" << "x=" << (float)(x / y) << "\n";
	cout << "x=x%y\t" << "\t|" << "x=" << x % y << "\n";

	system("PAUSE");
	return EXIT_SUCCESS;
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
