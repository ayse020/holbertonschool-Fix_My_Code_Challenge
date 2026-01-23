#include "lists.h"

/* Free all nodes */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
