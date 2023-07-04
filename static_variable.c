#include <stdio.h>

/* testing on how static variable works */


void increment()
{
	static int i = 0; /* static varable */

	i++; printf("%d\n",i);
}

int main()
{
	int a;/* local variable */

	static int b; /* static variable */

	a=5; b=7;

	a = a+1; b = b+1;

	increment();

	printf ("%d\n %d\n",a,b);

	increment(); return 0;
}
