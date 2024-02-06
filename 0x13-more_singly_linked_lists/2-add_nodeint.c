#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to first node of list.
 * @n: data in new node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neww;

	neww = malloc(sizeof(listint_t));
	if (neww == NULL)
		return (NULL);
	neww->n = n;
	neww->next = *head;
	*head = neww;
	return (neww);
}
