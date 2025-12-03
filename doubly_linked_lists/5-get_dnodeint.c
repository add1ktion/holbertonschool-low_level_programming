#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
        return (NULL);

	if (index == 0)
		return (head);

	return get_dnodeint_at_index(head->next, index - 1);
}
