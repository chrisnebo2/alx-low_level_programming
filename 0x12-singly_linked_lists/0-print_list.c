#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the contents of a singly linked list
 * h: pointer to the head of the linked list
 *
 * Description: prints the contents of a s singly linked list
 * and returns the count (number) of nodes in the list.
 * Return: count of nodes (success)
 */

size_t print_list(const list_t *h)
{
	list_t *ptr;
	unsigned int count;

	ptr = h;
	count = 0;

	while(ptr != NULL)
	{
		count++;
		if(ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
	}
	
	return (count);
}
