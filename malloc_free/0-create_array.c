#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_aray - Creates an array
 * @size: Size of the array
 * @c: Char in the array
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	
	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}