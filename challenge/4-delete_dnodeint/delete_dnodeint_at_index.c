#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* Traverse to the node at the given index */
    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    /* If index is out of bounds */
    if (current == NULL)
        return (-1);

    /* If the node to delete is the head */
    if (current == *head)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    }
    else
    {
        /* Update the previous node's next pointer */
        current->prev->next = current->next;

        /* Update the next node's prev pointer */
        if (current->next != NULL)
            current->next->prev = current->prev;
    }

    free(current);
    return (1);
}
