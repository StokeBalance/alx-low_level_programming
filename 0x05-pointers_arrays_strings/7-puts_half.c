#include "main.h"

/**
* puts_half - Prints half o a string
* @str: String parameter
*
* Return: void
*/

void puts_half(char *str)
{
	int i, len = 0;
	int n = (len - 1) / 2;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i <= len--; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (i = n; i <= len--; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
