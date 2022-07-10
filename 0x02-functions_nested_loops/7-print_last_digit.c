#include "main.h"

/**
 * print_last_digit -> returns the absolute value of every number
 * @n: this is the parameter to be checked
 * Return: 0 success, otherwise failure
 */

int print_last_digit(int n)
{
	int rem;

	rem = n % 10;
	if (rem < 0)
	rem = (-1) * rem;

	_putchar(rem + '0');

	return (rem);
}
