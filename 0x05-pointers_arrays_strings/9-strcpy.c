#include "main.h"

/**
* _strcpy - Copies string
* @dest: Destination
* @src: Source
*
* Return: Pointer to a character
*/

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);

}
