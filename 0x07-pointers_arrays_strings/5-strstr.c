#include "main.h"
#include <stdio.h>

/**
* _strstr -Locates a substring
* @haystack: input string
* @needle: string to be located
*
* Return: Pointer to the beginning of located substring
* or NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *ptrn = needle, *ptrh = haystack;

	while (*haystack)
	{
		ptrh = haystack;
		needle = ptrn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = ptrh + 1;
	}
	return (NULL);
}

