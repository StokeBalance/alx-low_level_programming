#include <stdio.h>
#include <stdlib.h>

/**
* main -Entry point
*
* Return: Always 0
*/
int main(void)
{
	int num, alph;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alph = 'A'; alph <= 'F'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
