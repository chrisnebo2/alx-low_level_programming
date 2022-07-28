#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	tmp = malloc(nmemb * size);

	if (tmp == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		tmp[a] = 0;
	return (tmp);
}
