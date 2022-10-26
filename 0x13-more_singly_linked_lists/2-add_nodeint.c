#include "lists.h"

/**
 * add_nodeint - Insertion operation
 * @head: pointer to a list
 * @n: numeric data
 * Return: return NULL or the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(struct listint_s));
	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

