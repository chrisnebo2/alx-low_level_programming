#include "main.h"

/**
 * print_alphabet_x10 -> Prints alphabets from a-z on screen 10 times
 * Return: 0 success, otherwise failure
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
