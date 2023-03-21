#include "main.h"
/* print_last_digit - prints last digit of a number
* @r: parameter to be checked
*
* Return: 0
*/

int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	_putchar((r % 10) + '0');
	return (0);
}
