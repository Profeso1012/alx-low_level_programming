#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given pos
 * @head: pointer to head of first node of list.
 * @idx: index where node should be added
 * @n: ...
 *
 * Return: addr of node, NULL otherwise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	unsigned int count = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr != NULL)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	return (NULL);
}
