#include "main.h"

/**
* _strchr - Locates character in a string
* @s: String to be searched from
* @c: character to search
*
* Return: Pointer to first found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
