#include "main.h"

/**
* puts_half - Prints half o a string
* @str: String parameter
*
* Return: void
*/

void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;

	float n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (; i <= n; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
