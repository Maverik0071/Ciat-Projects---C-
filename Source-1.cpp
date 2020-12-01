// Class Average Program with counter-controlled iteration.
#include <stdio.h>

//Function main gins program execution
int main(void)
{
	unsigned int counter;  // number of grade to be entered next
	int grade;  // grade value
	int total;  // sum of grades entered by user
	int anverage;  // average of grades 

	// initialize phase
	total = 0;  // initialize total
	counter = 1; // initialize loop counter

	// processing phase
	while (counter <= 10) {// loop 10 times
		printf("%s", "Enter grade: ");  // prompt for input
		scanf(" %d", &grade ); // read grade to total
		total = total + grade; // add grade to total
		counter = counter + 1;  // increment counter
	}	// end while

		// terminaition phase
		average = total / 10; // integer division

	printf("Class average is %d\n", average ); // display result
	
}	// end function main
	return 0;

