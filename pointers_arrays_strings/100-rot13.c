#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* rot13 - Rotify the string
* @str: String to rotify
* Return: Rotified string
*/
char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13s[]  = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
			str[i] = rot13s[j];
			break;
			}
		}
	}
	return (str);
}
