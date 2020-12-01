/*Week Four Exercise 8a
William Sewell */
#include<iostream>
#include<string>
using namespace std;
class Date 
{
private:
	int month;
	int day;
	int year;
	static char slash;
	void setMonth(int);
	void setDay(int);
	void setYear(int);
public:
	void setDate(int, int, int);
	void showDate();

};

char Date::slash = '/';
void Date::setDate(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);

}

void Date::setMonth(int m)
{
	if (m > 12)
		month = 12;
	else
		month = m;

}
void Date::setDay(int d)
{
	if (d > 31)
		day = 31;
	else
		day = d;

}
void Date::setYear(int y)
{
	year = y;

}
void Date::showDate()
{
	cout << "Date: " << month << slash << day << slash 
		<< year << endl;

}

int main()
{
	Date birthday, anniversary, graduation, party;
	birthday.setDate(04, 18, 1986);
	anniversary.setDate(05, 19, 2014);
	graduation.setDate(06, 06, 2014);
	party.setDate(14, 19, 2008);
	cout << "Birthday ";
	birthday.showDate();
	cout << "Anniversary ";
	anniversary.showDate();
	cout << "Graduation ";
	graduation.showDate();
	cout << "Party (with invalid month argument) ";
	party.showDate();
	return 0;
}