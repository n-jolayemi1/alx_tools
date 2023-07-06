#include <stdio.h>

/**
 * Main- To test how the goto works in c
 *
 * Return: Always return zero(0) i.e Success
 */

int main(void)
{
	int number, i; 

	printf("Enter number: "); scanf("%d", &number);

multiplication: 
	for (i = 0; i <= 12; i++)
	{
		printf("%d X %d = %d\n", i, number, i*number);
	}

square_of_numb:
	for (i = 1; i <= number; i++)
	{
		printf("%d square is: %d\n", i, i*i);
	}

	if (number <= 10) goto multiplication;
	
	else{
		goto square_of_numb;
	}
	return 0;
}

