#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the contents of a singly linked list
 * @h: pointer to the head of the linked list
 *
 * Description: counts the number of member in a struct of type list_t
 * Return: count of nodes (success)
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
