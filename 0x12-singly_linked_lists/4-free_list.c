#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: first node
 *
 * Return: none
 */

void free_list(list_t *head)
{
    list_t *tmp_node;

    while (head != NULL)
    {
        tmp_node = head->next;
        free(head->str);
        free(head);
        head = tmp_node;
    }
}