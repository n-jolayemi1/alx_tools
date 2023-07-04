#include <stdio.h>

/* factors of a number */

int main()
{
	int factor, range_of_number; 

	printf("Enter number: "); scanf("%d",&factor);

	printf("The factors of %d is: \n", factor);

	for (range_of_number = 1; range_of_number <= factor; range_of_number++)
	{
		const int actual_factor = factor % range_of_number;
		if (actual_factor == 0)
		{
			printf("%d\n", range_of_number);
		}
	}
	return 0;
}
