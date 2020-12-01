// Week Two Exercise Two - One To Ten
#include<iostream>
using namespace std;
int main()
{
	int itemNumber;
	double price;
	double discountAmount;
	double newPrice;
	const double RATE = 0.20;
	cout << "Enter the item number or 0 to quit ";
	cin >> itemNumber;
	while (itemNumber != 0)
	{
		cout << "Enter price for item #" <<
			itemNumber << " ";
		cin >> price;
		discountAmount = price * RATE;
		newPrice = price - discountAmount;
		cout << "Item #" << itemNumber <<
			" was $" << price << endl;
		cout << "but with a discount of $" <<
			discountAmount << ", it is $" <<
			newPrice << endl;
		cout << "Enter another item number or 0 to quit ";
		cin >> itemNumber;
	}
	return 0;
}