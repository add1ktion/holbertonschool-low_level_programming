#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* leet - Leetify strings
* @str: String to leetify
* Return: Leetified string
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
			if (str[i] == str[j])
			str[i] = rot13[j];
			break;
		}
	}
	return (str);
}