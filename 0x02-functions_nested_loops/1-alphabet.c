#include "main.h"

/**
 * print_alphabet -> This program is used to print alphabets from a-z on screen
 * Return: 0 success, otherwise failure
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
