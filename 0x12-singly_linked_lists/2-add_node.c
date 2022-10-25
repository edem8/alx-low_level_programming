#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Insertion in a linkedlist
 * @head: the list
 * @str: the data element
 * Return: return the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->next = *head;
	*head = new;

	if (new->str == NULL)
		return (NULL);
	return (new);
}
