// Week Four - You Do It
// William Sewell
#include<iostream>
#include<string>
using namespace std;

class CollegeCourse
{
private:
	string department;
	int courseNum;
	int seats;
public:
	void setDepartmentAndCourse(string, int);
	void setSeats(int);
	void displayCourseData();
};

void CollegeCourse::setDepartmentAndCourse(string dept, int num)
{
	department = dept;
		courseNum = num;

}

void CollegeCourse::setSeats(int seats)
{
	if (seats < 0)
		seats = 0;
	this->seats = seats;

}

void CollegeCourse::displayCourseData()
{
	cout << department << courseNum <<
		" accomodates " << seats <<
		" students" << endl;

}

int main()
{
	CollegeCourse myMondayClass;
	string dept;
	int num;
	int students;
	cout << "Enter the course number, for example, for "
		<< endl;
	cout << "For Example 'CIS' <<  ";
	cin >> dept;
	cout << "Enter the course number for example, for "
		<< dept << "101, enter 101 <<   ";
	cin >> num;
	cout << "Enter the number of students that are allowed"
		<< endl;
	cout << "To enroll in " << dept << num << " >>  ";
	cin >> students;
	myMondayClass.setDepartmentAndCourse(dept, num);
	myMondayClass.setSeats(students);
	myMondayClass.displayCourseData();
	return 0;

}