#include <stdio.h>
#include "main.h"

/**
* _isupper- il fais des trucs plutot pas mal
* @c: int le c pour qu'il vaux un truc
* Return: Always 0 (Success)
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
