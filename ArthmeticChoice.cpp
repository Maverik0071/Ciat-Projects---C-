// Week Two Exercise Huided Question 3
#include <iostream>
using namespace std;
int main()
{
	double num1, num2;
	char operation;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
		cout << "Enter an operation: a, s, m, or d:  ";
		cin >> operation;
		if (operation == 'a')
			cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		else
			if (operation == 's')
				cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
			else
				if (operation == 'm')
					cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
				else
					if (operation == 'd')
						cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;

			
	return 0;
}