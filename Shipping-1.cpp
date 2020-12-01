// Week Three Guided Exercise 8
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 4;
	char code[SIZE] = { 'a', 't', 'r', 'h' };
	double price[SIZE] = { 14.95, 10.25, 8.75, 25.99 };
	char shipMethod;
	int x, found = 0;
	cout << "Enter shipping method code: ";
	for (x = 0; x < SIZE; ++x)
		cout << code[x] << " ";
	cout << endl;
	cin >> shipMethod;
	for (x = 0; x < SIZE; ++x)
	{
		if (shipMethod == code[x])
		{
		cout << "Price is $" << price[x] << endl;
		x = SIZE;
			found = 1;
		}
	}
	if (!found)
		cout << "Sorry - No such shipping method" << endl;
	return 0;
}