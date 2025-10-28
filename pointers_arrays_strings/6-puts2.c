#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* rev_string - Reverse a string
* @s: The string to reverse
*
* Return: void
*/
void puts2(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		*ptr +=2;
	}
	_putchar('\n');
}
