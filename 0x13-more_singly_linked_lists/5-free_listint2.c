#include "lists.h"

/**
 * free_listint - prints elements of a listint_t list.
 * @head: pointer to first node of list.
 * Return: no of nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;
	while (*head)
	{
		last = *head->next;
		free(*head);
		*head = last;
	}
	*head = NULL;
}
