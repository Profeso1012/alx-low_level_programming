#include "lists.h"

/**
 * pop_listint -  deletes the head node of a list.
 * @head: pointer to head of first node of list.
 *
 * Return: data of the popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int del;

	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	del = (*head)->n;
	free(*head);
	*head = ptr;
	return (del);
}
