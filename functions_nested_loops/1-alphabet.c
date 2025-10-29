#include"main.h"

/**
 * main - print the alphabet
 *
 * print_alphabet - print alphabet.
 */
void print_alphabet(void)
{
	char print_alphabet = ('a');
		while (print_alphabet <= 'z')
		{
		_putchar (print_alphabet);
		print_alphabet++;
		}
		_putchar('\n');
		}
