#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -	Concatenates all program
 *				arguments into a single string.
 * @ac: Argument count.
 * @av: Argument vector (array of strings).
 *
 * Return:	Pointer to the new string,
 *			or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
