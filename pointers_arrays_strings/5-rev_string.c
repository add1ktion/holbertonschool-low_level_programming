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

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
	}
}
