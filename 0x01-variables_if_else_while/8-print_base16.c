#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success, otherwise failure
 */
int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
