#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * This function prints all characters from 'a' to 'z' using _putchar,
 * and adds a new line at the end.
 *
 * Return: Nothing (void).
 */
void print_alphabet(void)
{
	char print_alphabet = 'a';

	while (print_alphabet <= 'z')
	{
		_putchar(print_alphabet);
		print_alphabet++;
	}
	_putchar('\n');
}
