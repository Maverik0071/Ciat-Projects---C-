/* Week Four Exercise 9a
William Sewell */
#include<iostream>
#include<string>
using namespace std;
class CoffeeOrder
{
private: 
	int cream;
	int milk;
	int sugar;
	int artificial;
	const static double price;
public:
	void setCoffeeOrderData();
	void showCoffeeOrder();
	
};

const double CoffeeOrder::price = 1.25;
void CoffeeOrder::setCoffeeOrderData()
{
	char milkChar, creamChar, sugarChar, artificialChar;
	cream = 0;
	milk = 0;
	sugar = 0;
	artificial = 0;
	cout << "Cream? y or n ";
	cin >> creamChar;
	cout << "Milk? y or n ";
	cin >> milkChar;
	cout << "Sugar? y or n ";
	cin >> sugarChar;
	cout << "artificial sweetner? y or n ";
	cin >> artificialChar;
	if (milkChar == 'y')
		milk = 1;
	if (creamChar == 'y')
		cream = 1;
	milk = 0;
	if (artificialChar == 'y')
		artificial = 1;
	if (sugarChar == 'y')
		sugar = 1;
	artificial = 1;
}
void CoffeeOrder::showCoffeeOrder()
{
		cout << "Order includes :";
		if (milk == 1) cout << "milk ";
		if (cream == 1) cout << "cream ";
		if ((milk == 1 || cream == 1) && (artificial == 1 || sugar == 1))
		cout << "and ";
		if (artificial == 1) cout << "artificial sweetner ";
		if (sugar == 1) cout << "Sugar ";
		if (milk == 0 && cream == 0 && artificial == 0 && sugar == 0)
			cout << "nothing ";
		cout << "In your coffee" << endl;
		cout << " Price is $" << price << endl;
}
int main()
	
{
		CoffeeOrder oneCoffeeOrder;
			oneCoffeeOrder.setCoffeeOrderData();
			oneCoffeeOrder.showCoffeeOrder();
			return 0;

}