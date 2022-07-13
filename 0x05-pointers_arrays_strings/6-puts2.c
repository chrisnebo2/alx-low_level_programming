#include "main.h"

/**
 *  puts2 - prints a string, followed by a new line,
 *   @str: pointer to the string to print
 *    Return: void
 */

void puts2(char *str)
{
	int len;
	int i;

	for (len = 0; str[len]; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 1)
			continue;

		_putchar(str[i]);
	}
	_putchar('\n');
}
