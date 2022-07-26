#include "main.h"

/**
 * _strcat - concatenate source string to destination string
 * @dest: the destination string to be concatenated into
 * @src: the source string to be copied from
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
