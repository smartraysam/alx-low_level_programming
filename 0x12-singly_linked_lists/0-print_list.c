#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_cnt  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
