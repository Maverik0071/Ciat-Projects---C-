// Week Two Exercise Question 10

#include<iostream>
using namespace std;
int main()
{

	const int MIN_YRS_WORK = 2;
	const int MIN_AGE = 16;
	const int MIN_POUNDS = 40;
	const int MIN_SPEED = 50;
	int age, yearsWork, pounds, typespeed;
	cout << "Enter Your Age: ";
	cin >> age;
	cout << "How many years of work experience do you have? ";
	cin >> yearsWork;
		cout << "How many pounds can you lift? ";
		cin >> pounds;
		cout << "How fast can you type? ";
		cin >> typespeed;
		if (age <= MIN_AGE && yearsWork >= MIN_YRS_WORK && (pounds >= MIN_POUNDS
			|| typespeed >= MIN_SPEED))
			cout << "please submit an application" << endl;
		else
			cout << "Sorry, We cannot use you at this time!" << endl;




	return 0;
}