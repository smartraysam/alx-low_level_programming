#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
 * add_node - add node to begining of list
 * @head: first node
 * @str: new node string
 * Return: address of new element/ NULL if failed
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = _strlen(str);
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
