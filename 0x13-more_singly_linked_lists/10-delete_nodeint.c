#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in list at a given index
 * @head: ptr to the first element in the list
 * @index: index of the node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}

	while (i < index - 1)
	{
		if (!last || !(last->next))
			return (-1);
		last = last->next;
		i++;
	}


	current = last->next;
	last->next = current->next;
	free(current);

	return (1);
}
