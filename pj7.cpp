#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int NUM_LOOPS = 20;
	int count = 10;

	while (count < NUM_LOOPS)
	{
		for (int i = 1; i <= 20; i++)
			cout << " numbers = " << i * i <<"\t Square root= " << i << endl;
		++count;

	}


	return 0;
}