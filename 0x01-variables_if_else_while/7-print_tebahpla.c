#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success, otherwise failure
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
