#include "lists.h"

/**
 * free_listint2 - prints elements of a listint_t list.
 * @head: pointer to head of first node of list.
 * Return: always success
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;
	while (*head)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
	}
	*head = NULL;
}
