// You Do It Exercise Chapter Three
#include <iostream>
using namespace std;
int main()
{
	int hoursGone;
	const int MANY_HOURS = 6;

	cout << "ON Average, how many hours are you gone from home each day> ";
	cin >> hoursGone;
	if (hoursGone > MANY_HOURS)
		cout << "You Should consider a cat" << endl;
	else
		cout << "You can consider a dog" << endl;
	return 0;

}