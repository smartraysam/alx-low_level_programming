#include "lists.h"

/**
 * listint_len - number of element in  list
 * @h: h - list parameter
 * Description: return number of element in the list
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
