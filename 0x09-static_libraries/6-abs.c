#include "main.h"

/**
 * _abs -> returns the absolute value of every number
 * @n: this is the parameter to be checked
 * Return: 0 success, otherwise failure
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}

	return (n);
}
