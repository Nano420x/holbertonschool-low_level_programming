#include <stdio.h>
#include "main.h"

/**
  * main- entry point
  * c: C c'est C idk
  * _isupper: return(1)
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
