#include <stdio.h>

/* sum of inputed numbers
 * skip the number if its negative
 * stop the program if the inputed number = 0
 */

int main()
{
	int number, sum = 0, highest = 0; char list;

	while (1)
	{

		printf("Enter number: "); scanf("%d", &number);

		if (number == 0)
		{
			break;
		}
		else if(number < 0)
		{
			continue;
		}

		sum+=number; list += sum;

		if (number > highest)
		{
			highest = number;
		}
	}

	printf("The sum of the number entered = %d\n The highest number entered =  %d\n These are the number entered\n\t%c", sum, highest, list);  return 0;
}
