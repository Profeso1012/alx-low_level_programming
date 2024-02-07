#include "lists.h"

/**
 * get_nodeint_at_index -  gets nth node of the list
 * @head: pointer to first node of list.
 * @index: index of the node, starting at 0
 *
 * Return: value of nth node otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	ptr = head;
	while (ptr)
	{
		if (count == index)
			return (ptr);
		else
			count++;
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		if (count == index)
			return (ptr);
	}
	return (NULL);
}
