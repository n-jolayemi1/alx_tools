#include <stdio.h>

int main()
{
	int x; printf("Enter the number: ");
	
	scanf("%d", &x);

	switch(x)
	{
		case 25:
			printf("The switch is incorrect\n");
			break;
		case 50:
			printf("The switch is correct\n");
			break;
		default:
			printf("Switch is the same\n");
	} return 0;
}
