#include <stdio.h>

/**
* main - prints out the size of data types
* @void: Indicates no parameter
*
* Return: The return value
*/
int main(void)
{
printf("Size of a char: %ul byte(s)", (unsigned long)sizeof(char));
printf("Size of an int: %ul byte(s)", (unsigned long)sizeof(int));
printf("Size of a long int: %ul byte(s)", (unsigned long)sizeof(long int));
printf("Size of a long long int: %ul byte(s)", (unsigned long)sizeof(long long int));
printf("Size of a float: %ul byte(s)", (unsigned long)sizeof(float));
return (0);
}
