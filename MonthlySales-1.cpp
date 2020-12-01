// Week Three Guided Exercise 3
#include<iostream>
using namespace std;
int main()
{
	const int SZ = 12;
	double sales[SZ];
	int x;
	double total = 0, average;
	for (x = 0; x < SZ; ++x)
	{
		cout << "Enter sales for month " << (x + 1) << " = ";
		cin >> sales[x];
		total += sales[x];
	}
	average = total / SZ;
	for (x = 0; x < SZ; ++x)
	{
		cout << "$ " << sales[x] << "is ";
		if (sales[x] > average)
			cout << "higher ";
		else
			if (sales[x] < average)
			cout << "lower ";
			else
				cout << "equal to";
		cout << "Than the average of $ " << average << endl;
		return 0;
	}



	
}