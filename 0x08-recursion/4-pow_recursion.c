#include "main.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: the final value of x to the power of y
 */

int _pow_recursion(int x, int y)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * _pow_recursion(x, y-1));

}
