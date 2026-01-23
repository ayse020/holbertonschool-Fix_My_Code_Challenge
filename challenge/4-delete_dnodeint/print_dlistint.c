#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
void print_dlistint(const dlistint_t *h)
{
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
