#include "lists.h"
/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Pointer the head of the list_t list.
* @str: String to be added to the list_t list.
*
* Return: If function fails - NULL else - the address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *scopy;
	unsigned int slen;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	scopy = strdup(str);
	if (scopy == NULL)
	{
		free(new);
		return (NULL);
	}

	slen = 0;
	while (str[slen] != '\0')
		slen++;

	new->str = scopy;
	new->len = slen;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
