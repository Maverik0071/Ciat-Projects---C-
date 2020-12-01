/* Week Four Exercise Question 4
William Sewell */
#include<iostream>
#include<string>
using namespace std;
class Dog
{
private:
	string name;
	string breed;
	int age;
	static double licenseFee;
public:
	void SetDogData(string, string, int);
	void showDog();
};

double Dog::licenseFee = 12.25;

void Dog::SetDogData(string dogName, string dogBreed, int dogAge)
{
	
	name = dogName;
		breed = dogBreed;
		age = dogAge;
}

void Dog::showDog()
{
	cout << "Dog: " << name << "is a " << breed << endl;
	cout << "The dog's age is " << age << endl;
	cout << "License fee: $" << licenseFee << endl;

}

int main()
{
	Dog myDog;
	myDog.SetDogData("Terry", " Siberian Husky", 2);
		myDog.showDog();
	return 0;

}