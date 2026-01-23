#include "lists.h"

/* Delete node at index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    current = *head;

    for (i = 0; i < index && current; i++)
        current = current->next;

    if (!current)
        return (-1);

    if (current->prev)
        current->prev->next = current->next;
    else
        *head = current->next; /* deleting head */

    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
