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

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (num);
}
