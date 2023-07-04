#include <stdio.h>

/* Grade clarification */

int main()
{
	int grade; printf("Kindly enter your grade: ");

	scanf("%d",&grade); 

	if ((grade >= 85) && (grade <= 100))
	{
		printf("Distinction\n");
	}

	else if ((grade >= 75) && (grade <= 84))
	{
		printf("Excellent\n");
	}

	else if ((grade >= 60) && (grade <= 74))
	{
		printf("Very Good\n");
	}

	else if ((grade >= 50) && (grade <= 59))
	{
		printf("Good\n");
	}

	else if ((grade >= 45) && (grade <= 49))
	{
		printf("Pass\n");
	}

	else
	{
		printf("Sorry! you failed the course\n");
	} return 0;
}
