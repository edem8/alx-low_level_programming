#include "lists.h"

/**
 * listint_len - Tranversing a list
 * @h: list
 * Return: return the number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
