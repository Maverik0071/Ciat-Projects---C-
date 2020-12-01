/* Week Three Exercise Question 8
Authored by Quentin Miller */
#include<iostream>
using namespace std;
void getNumberDrawers(int& x)
{
	cout << "Enter the number of drawers: ";
	cin >> x;

}
void getWoodType(char& x)
{
	cout << "Please select the type of wood by entering: 'm' for mahogany, 'o' for oak " <<
		"or 'p' for pine: ";
	cin >> x;
}
void getCost(int d, char y, int& x)
{
	switch (y) 
	{
	case 'o':
		x = d * 30 + 140;
		break;
	case 'p':
		x = d * 30 + 100;
		break;
	default:
		x = d * 30 + 180;

	}

}
void displayPrice(int& x)
{
	cout << "The cost of your desk is $" << x << endl;

}
int main()
{
	int drawers, cost = 0;
	char wood = 'O';
	getNumberDrawers(drawers);
	getWoodType(wood);
	getCost(drawers, wood, cost);
	displayPrice(cost);

	return 0;
}