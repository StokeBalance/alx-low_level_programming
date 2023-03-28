#include <stdio.h>
#include "main.h"

/**
* print_array - Prints number of elements in an array
* @a: Parameter that is a pointer to an integer
* @n: Parameter that is an integer
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
