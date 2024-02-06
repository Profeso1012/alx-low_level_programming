#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to first node of list.
 * @n: data in new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neww;
	listint_t *last = *head;

	neww = malloc(sizeof(listint_t));
	if (neww == NULL)
		return (NULL);
	neww->n = n;
	neww->next = NULL;
	if (*head == NULL)
	{
		*head = neww;
		return (neww);
	}
	while (last->next)
		last = last->next;
	last->next = neww;
	return (neww);
}
