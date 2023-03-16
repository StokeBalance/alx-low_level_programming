#include <stdio.h>

/**
* main - prints out the size of data types
* @void: Indicates no parameter
*
* Return: Returns 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %ul byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %ul byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ul byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %ul byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %ul byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
