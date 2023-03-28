#include "<main.h>"
/**
* rev_string - Reverses string
* @s: String parameter
*
* Return: void
*/

void rev_string(char *s)
{
	int i, len;

	while (s[len]  != '\0')
		len++;
	for (i = len; i >= 0; i--)
		s[i];

}
