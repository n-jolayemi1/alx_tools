#include <stdio.h>

/* Eligibility to vote */

int main()
{
	int age; printf("Enter your Age: "); scanf("%d", &age);

	if (age < 18) printf("You are not eligible to vote\n");

	else {
		printf("You are eligible to vote\n");
	} return 0;
}
