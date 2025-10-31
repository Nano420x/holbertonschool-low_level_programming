#include "main.h"

/**
* print_triangle- triangle triangle et encore triangle
* @size: taille des triangles
*/

void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		_putchar(' ');
		for (hash = 0; hash < row; hash++)
		_putchar('#');
	_putchar('\n');
	}
}
