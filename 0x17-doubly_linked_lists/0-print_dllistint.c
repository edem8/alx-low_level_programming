#include "lists.h"


/**
 * print_dlistint - prints elements in a double linked list
 * @h: pointer to head of the list.
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		exit(98);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
