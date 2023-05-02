#include "lists.h"

/**
 * add_nodeint_end - add node to the end of list
 * @head: first node
 * @n: new node int value
 *
 * Return: address of new element/ NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *tmp_node;

    new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = NULL;
    tmp_node = head;
    while (tmp_node->next != NULL)
    {
        tmp_node = tmp_node->next;
    }
    tmp_node->next = new_node;
    return (new_node);
}
