#include "main.h"
/* _isalpha - checks for alphabets
* @c: the char to be checked
* 
* Return: 1 if c is an alphabet, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
