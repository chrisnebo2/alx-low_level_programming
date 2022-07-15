#include "main.h"

/**
 * *_strncpy -  copies n number of string pointed to by src to dest
 * @dest: char type string
 * @src: char type string
 * @n: number of bytes of string to be copied
 * Description: Copy n number of strings pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;
	int j;

	j = 1;

	do {
		if (j <= n)
		{
			i++;
			dest[i] = src[i];
			j++;
		}
	} while (src[i] != '\0');

	return (dest);
}
