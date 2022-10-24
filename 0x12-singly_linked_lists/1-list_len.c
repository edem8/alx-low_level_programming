#include "lists.h"

/**
 * list_len - traverse a linklist
 * @h: list
 * Return: return the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
