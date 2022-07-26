#include "main.h"

/**
 * _islower -> returns 1 if a character is lowercase else returns 0
 * @c: this is the parameter to be checked
 * Return: 0 success, otherwise failure
 */

int _islower(int c)
{


	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
