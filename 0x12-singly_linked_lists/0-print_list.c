#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print singly  list
 * @h: h - list parameter
 *
 * Description: print all element in the list
 */

size_t print_list(const list_t *h)
{
    size_t node_cnt = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n",h->len, h->str);
        }
        h = h->next;
        node_cnt++;
    }
    return node_cnt;
}
