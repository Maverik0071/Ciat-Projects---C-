#include<iostream>;
using namespace std;
int Quadruplet(int Num)
{
	int aNswer = Num * 4;
	return aNswer;
}
int main()
{
	const int SIZE = 5;
	int arrNum[SIZE];
	cout << "Please enter 5 integers: " << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> arrNum[i];
	}
	for (int j = 1; j < SIZE; ++j)
	{
		cout << "The quad of "<< j << " is " << Quadruplet(arrNum[j]) << endl;
	}
	return 0;
}
