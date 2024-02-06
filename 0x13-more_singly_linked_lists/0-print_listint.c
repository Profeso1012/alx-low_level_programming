#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list.
 * @h: pointer to first node of list.
 * Return: no of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t num = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	return (num);
}
