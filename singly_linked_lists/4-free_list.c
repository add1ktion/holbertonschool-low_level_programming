#include "lists.h"
/**
* free_list - Frees a list_t list.
* @head: A pointer to the list_t list.
*/
void free_list(list_t *head)
{
	list_t *actual;

	while (head != NULL)
	{
		actual = head->next;
		free(head->str);
		free(head);
		head = actual;
	}
}
