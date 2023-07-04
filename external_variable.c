#include <stdio.h>

/* External variable
 */

extern int external_variable; /* Declaration external variable */

void increment ()
{
	++external_variable; printf("The increment of external variable is: %d\n", external_variable);
}

void print_external_variable()
{
	external_variable = 20;

	printf ("The external variable is: %d\n", external_variable);
}

int main()
{
	external_variable = 12; increment();

	print_external_variable(); return 0;
}
