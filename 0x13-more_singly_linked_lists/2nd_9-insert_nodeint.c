listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0) {
        new->next = *head;
        *head = new;
        return (new);
    }

    listint_t *ptr = *head;
    unsigned int count = 0;
    while (ptr && count < idx - 1) {  // Continue as long as ptr is not NULL and index not reached
        ptr = ptr->next;
        count++;
    }

    if (ptr != NULL) {  // Index found within the list
        new->next = ptr->next;
        ptr->next = new;
        return (new);
    } else {  // Index not found
        return (NULL);
    }
}
