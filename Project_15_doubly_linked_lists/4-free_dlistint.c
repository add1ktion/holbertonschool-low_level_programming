#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: void
 */
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
