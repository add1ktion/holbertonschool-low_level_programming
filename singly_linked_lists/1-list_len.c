#include "lists.h"
/**
* print_list - Find the elements of list_t.
* @h: The list_t list.
*
* Return: Number of elements in h.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
