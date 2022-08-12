#include "lists.h"
#include <string.h>

/**
 * _strlen - counts the number of characters in a string
 * @str: pointer to the string to be counted
 * Return: number of characters in the string
 */

int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		count++;

	return (count);
}

/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = _strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
