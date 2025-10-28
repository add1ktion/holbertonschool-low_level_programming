#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* rev_string - Reverse a string
* @s: The string to reverse
*
* Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - i - j] = tmp;
	}
}
