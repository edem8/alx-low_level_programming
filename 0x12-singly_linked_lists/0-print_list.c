#include "main.h"
#include <stdlib.h>

/**
 * print_list - traversing a linked list
 * @h: list
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
