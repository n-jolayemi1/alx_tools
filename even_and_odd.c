#include <stdio.h>

/* confirmation if number is even or odd */

int main()
{
	int number; printf("Enter Number: "); scanf("%d", &number);

	int answer = number % 2;

	if (answer == 0)
	{
		printf("The number you entered is an even number\n");
	}
	else
	{
		printf("The number you entered is an odd number\n");
	} return 0;
}
