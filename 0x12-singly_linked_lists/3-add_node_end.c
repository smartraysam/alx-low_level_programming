#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - find string length
 * @str: the string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - add node to the end of list
 * @head: first node
 * @str: new node string
 *
 * Return: address of new element/ NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
		tmp_node = *head;
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
