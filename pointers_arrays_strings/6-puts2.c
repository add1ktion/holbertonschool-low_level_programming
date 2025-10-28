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
	int toggle = 1;

	while (*ptr != '\0')
	{
		if (toggle)
			_putchar(*ptr);
		toggle = !toggle;
		ptr++;
	}
	_putchar('\n');
}
