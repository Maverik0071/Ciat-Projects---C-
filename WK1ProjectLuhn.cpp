
#include <iostream>
using namespace std;

int toInt(const char c)
{
	return c - '0';
}

int confirm(const char* id)
{
	bool is_odd_dgt = true;
	int s = 0;
	const char* cp;

	for (cp = id; *cp; cp++);
	while (cp > id) {
		--cp;
		int k = toInt(*cp);
		if (is_odd_dgt) {
			s += k;
		}
		else {
			s += (k != 9) ? (2 * k) % 9 : 9;
		}
		is_odd_dgt = !is_odd_dgt;
	}
	return 0 == s % 10;
}

int main()
{
	const char* t_cases[] = {
		"49927398716",
		"49927398717",
		"1234567812345678",
		"1234567812345670",
		NULL,
	};
	for (const char** cp = t_cases; *cp; cp++)
	{
		cout << *cp << " :results:   " << confirm(*cp) << endl;
	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
