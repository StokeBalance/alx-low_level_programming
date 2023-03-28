#includde "<main.h>"
/**
* print_rev - Reverses string
* @s: String parameter
*
* Return: void
*/

void print_rev(char *s)
{
	int i, len;

	while (s[len]  != '\0')
		len++;
	for (i = len; i >= 0; i--)
		s[i];

}
