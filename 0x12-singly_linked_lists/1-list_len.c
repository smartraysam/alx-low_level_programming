#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of element in  list
 * @h: h - list parameter
 * Description: return number of element in the list
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
