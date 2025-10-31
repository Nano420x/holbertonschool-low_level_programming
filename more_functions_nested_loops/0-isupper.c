#include <stdio.h>
#include "main.h"

/**
 * main- entry point
 *
 * c The character to check.
 *
 * _isupper : return(1)
 *
 * return 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
