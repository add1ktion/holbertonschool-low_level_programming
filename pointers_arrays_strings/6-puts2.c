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
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
