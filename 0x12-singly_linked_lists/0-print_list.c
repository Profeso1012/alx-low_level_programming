#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function prints the elements of a linked list and
 * returns the number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		node++;
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (node);
}
