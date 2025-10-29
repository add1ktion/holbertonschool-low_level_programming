#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* cap_string - Prints every 1st letter of a word as upper
* @str: String to modify
* Return: String with upper
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		else if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
					(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
					(str[i - 1] >= '0' && str[i - 1] <= '9')) &&
					str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
