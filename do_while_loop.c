#include <stdio.h>

/* Loop using do while. */


int main()
{
	int number,i; printf("Enter number: "); scanf("%d", &number);

	do
	{
		printf("%d  x  %d = %d\n",i,number,(i*number)); i++;
	}while(i<=12); return 0;
}
