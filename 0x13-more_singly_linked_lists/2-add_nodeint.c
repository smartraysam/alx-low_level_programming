#include "lists.h"

/**
 * add_nodeint - add node to begining of list
 * @head: first node
 * @stnr: new node int
 * Return: address of new element/ NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	head = new_list;
	return (new_list);
}
