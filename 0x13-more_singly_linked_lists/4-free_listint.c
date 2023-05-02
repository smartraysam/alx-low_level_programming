#include "lists.h"

/**
 * free_listint - free list
 * @head: first node
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}
