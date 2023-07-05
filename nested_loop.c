#include <stdio.h>

/**
 * main - where the program runs
 *
 * This program is to run a nested loop while the condition is true
 *
 * Return: Always return zero(0) Success
 */


int main(void)
{
	int number, range = 10;

	while (1)
	{
		printf("Enter number: "); scanf("%d", &number);

		if (number < range) break;
	}

	printf("You have entered the number below %d\n", range);
	return 0;
}
