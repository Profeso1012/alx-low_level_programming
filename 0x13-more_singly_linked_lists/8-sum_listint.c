#include "lists.h"

/**
 * sum_listint - sums elements of a listint_t list.
 * @head: pointer to first node of list.
 * Return: sum of nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int add = 0;

	ptr = head;
	while (ptr)
	{
		add += ptr->n;
		ptr = ptr->next;
	}
	return (add);
}
