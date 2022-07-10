#include "main.h"

/**
 * print_sign -> returns 1 for positive, 0 for zero and -1 for negative int
 * @n: this is the parameter to be checked
 * Return: 0 success, otherwise failure
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
