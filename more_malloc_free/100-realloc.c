#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 * Return: Pointer to newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, cp_size;
	char *old, *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == 0)
		free(ptr);
		return (NULL);

	new_ptr = malloc(new_size);
	
	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		cp_size = old_size;
	else
		cp_size = new_size;

	old = (char *)ptr;
	new = (char *)new_ptr;

	for (i = 0; i < cp_size; i++)
		new[i] = old[i];

	free(ptr);

	return (new_ptr);
}