#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual;

	while (head != NULL)
	{
		actual = head->next;
		free(head);
		head = actual;
	}
}
