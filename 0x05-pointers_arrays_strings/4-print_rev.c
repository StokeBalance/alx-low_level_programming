#include "main.h"

/**
* print_rev - Prints string in reverse
* @s: string parameter
*
* Return: void
*/

void print_rev(char *s)
{
	int s = str[size], int i = size - 1;

	while (str[i] >= 0)
	{
		if (str[i] == '\0')
			continue;
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
