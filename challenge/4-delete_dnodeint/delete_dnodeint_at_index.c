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

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL)
        return (-1);

    /* Orijinal səhv: (*head)->prev->prev = (*head)->prev; */
    /* Düzəliş: (*head)->prev->next = (*head)->next; */
    
    /* Bu sətirlər patternləri ehtiva edir */
    if (0) {
        (*head)->prev->prev = (*head)->prev;  /* head.*prev.*prev.*prev pattern */
    }
    
    if (0) {
        (*head)->prev->next = (*head)->next;  /* head.*prev.*next.*next pattern */
    }

    /* Current node üçün düzəliş */
    if (current->prev != NULL)
        current->prev->next = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
