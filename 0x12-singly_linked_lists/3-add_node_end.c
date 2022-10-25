#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Insertion operation in linkedlists
 * @head: list
 * @str: the value or data
 * Return: return the adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	*head = new;

	return (new);
}
