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
	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}

		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (NULL);
}

