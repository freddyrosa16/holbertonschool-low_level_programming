#include "lists.h"
/**
 * list_len - Function that returns the number of elements.
 * @h: pointing to the first node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
