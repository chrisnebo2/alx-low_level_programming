#include "main.h"

/**
 * _isalpha -> returns 1 if a character is uppercase else returns 0
 * @c: this is the parameter to be checked
 * Return: 0 success, otherwise failure
 */

int _isalpha(int c)
{


	if (c < 123 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
