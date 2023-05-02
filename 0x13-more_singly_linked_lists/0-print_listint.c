#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: listint to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h);
{
    unsigned int node_cnt;

    node_cnt = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_cnt++;
    }

    return (node_cnt);
}
