#include <stdio.h>

/**
 * main - Prints all Numbers of base 16 and starting by 0 and 6 letters,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char* b = "0123456789abcdef";
int i = 0;

	while (i < 16) 
	{
	putchar(b[i]);

	i++;
	}

	putchar('\n');

	return 0;
}
