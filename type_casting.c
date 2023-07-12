#include <stdio.h>

/**
 * main - To test Type Casting
 *
 * Return: Always return zero(0) i.e Success
 */

int main(void)
{
	int first_number, second_number;

	printf("Enter first number: "); scanf("%d", &first_number);
	printf("Enter second nunber: "); scanf("%d",&second_number);

	printf("%d divided by %d is: %f\n\t This answer displays using type casting (float)\n", first_number, second_number, (float)first_number/second_number); return 0;
}
