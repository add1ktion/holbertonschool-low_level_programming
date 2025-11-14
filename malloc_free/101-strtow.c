#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int wc(char *str);
char **strtow(char *str);

/**
 * wc - Count number of words in a stribg
 * @str: String to be counted
 * Return: Number of words, or 0 is NULL or empty
 */
int wc(char *str)
{
	int count = 0, i;

	if (str == NULL || str[0] == '\0')
		return (0);

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
 * strtow - Split string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings, or NULL if fail
 */
char **strtow(char *str)
{
	int i = 0, j = 0, len = 0;
	int start = 0, end = 0;
	int words_num = 0;
	int words_index = 0;
	char **words_arr;
	char *word;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words_num = wc(str);

	if (words_num == 0)
		return (NULL);

	words_arr = malloc((words_num + 1) * sizeof(char *));

	if (words_arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
		break;

		start = i;

		while (str[i] != '\0' && str[i] != ' ')
			i++;

		end = i;

		len = end - start;

		word = malloc(len + 1);
		if (word == NULL)
		{
			for (j = 0; j < words_index; j++)
				free(words_arr[j]);
			free(words_arr);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			word[j] = str[start + j];
		word[len] = '\0';

		words_arr[words_index] = word;
		words_index++;
	}

	words_arr[words_index] = NULL;

	return (words_arr);
}
