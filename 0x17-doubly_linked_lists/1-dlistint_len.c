#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: pointer to the head of the list
 * Return: return number of elements in lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL || h == 0)
	{
		dprintf(2, "Error: can't  malloc\n");
		return (EXIT_FAILURE);
	}

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
