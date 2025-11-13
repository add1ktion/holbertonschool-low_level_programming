#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int wc(char *str);
char **strtow(char *str);

/**
 * wc - Count number of words
 *
 *
 */
int wc(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (0);

	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}

/**
 * strtow - Cut string into words
 * @str: String to cut
 *
 * Return: 0
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, words_index = 0, start = 0, end = 0, len = 0;
	char **words;

	if (str == NULL || str == '\0')
		return (NULL);

	int words_num = wc(str);

	if (words_num == 0)
		return (NULL);

	words = malloc((words_num + 1) * sizeof(char *))

	if (words == NULL)
		return (NULL);	

	while (str[i] != '\0')
	{
		while (str[i] != ' ')
			i++;

		if (str[i] == '\0')
		break;
	}

	int start = i;

	while (str[i] != '\0' && str[i] != ' ')
		i++;

	int end = i;

	len = end - start;

	char *words = malloc(len + 1);
	if (words == NULL)
	{
		for (j = 0; j < words_index; j++)
			free(words[j]);
		free(words);
		return (NULL);
	}

	for (k = 0; k < len; k++)
		words[k] = str[start + k];
	
	words[len] = '\0';
}