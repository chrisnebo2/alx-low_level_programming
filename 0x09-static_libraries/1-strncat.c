#include "main.h"

/**
 * _strncat - concatenates n number of source string to destination string
 * @dest: the destination string to be concatenated into
 * @src: the source string to be copied from
 * @n: the number of bytes to be copied from src
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	int j;

	for (len = 0; dest[len] != '\0'; len++)
		;

	j = 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (j <= n)
		{
			dest[len] = src[i];
			len++;
			j++;
		}
	}

	return (dest);
}
