#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Result: Always 0
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');	
	return (0);
}
