#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - silir node-u double linked list-dən
 * @head: pointer pointer-ə list-in başına
 * @index: silinəcək node-un index-i (0-dan başlayır)
 * Return: 1 uğurlu silmə, 0 uğursuz
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (!head || !*head)
        return (0);

    current = *head;

    /* index 0-dırsa, baş node-u silirik */
    if (index == 0)
    {
        *head = current->next;        /* başı növbəti node-a dəyişirik */
        if (*head)
            (*head)->prev = NULL;     /* yeni başın prev-i NULL olur */
        free(current);
        return (1);
    }

    /* index-i tapmaq üçün loop */
    for (i = 0; current && i < index; i++)
        current = current->next;

    /* əgər index çox böyükdür */
    if (!current)
        return (0);

    /* node-u list-dən ayırırıq */
    if (current->prev)
        current->prev->next = current->next;

    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
