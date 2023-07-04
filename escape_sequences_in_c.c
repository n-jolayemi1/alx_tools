#include <stdio.h>

/* Escape sequences in c programming
 * How they all works
 * */

void vertical_tab()
{
	printf("\vThe space above shows the work of \\v in the code\n");
}

void Alarm()
{
	printf("let see how \\a Escape Sequence works \a\a\a\a\a\a\a\a\a\a\a\a\a\n");
}

void octal_number()
{
	printf("This is octal number of \"\\012\" is \012 for \"\\013\" is \013\n");
}

int main()
{
	vertical_tab(); Alarm(); octal_number();  return 0;
}
