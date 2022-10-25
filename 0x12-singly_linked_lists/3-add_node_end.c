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
	list_t *last;
	list_t *before_last;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = strlen(str);
	new->next = NULL;

	last = *(head);
	while (last != NULL)
	{
		last = last->next;
		if (last != NULL)
			before_last = last;
	}
	if (*(head) == NULL)
		*(head) = new;
	else
		before_last->next = new;

	return (new);
	
}
