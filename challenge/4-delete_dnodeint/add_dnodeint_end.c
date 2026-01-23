#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head
 * @n: value of the new node
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    new->prev = temp;

    return (new);
}
