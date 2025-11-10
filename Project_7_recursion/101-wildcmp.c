#include "main.h"
/**
 * wildcmp - Compares strings including '*'
 * which can replace any char and strings
 * @s1: 1st String to compare
 * @s2: 2nd String to compare
 *
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (1);
	}

	if (s2[i] == '*')
	{
		if ((s2[i + 1]) == '*')
		{
			return (wildcmp(s1, &s2[i + 1]));
		}

		if (wildcmp(s1, &s2[i + 1]))
		{
			return (1);
		}

		if (s1[i] != '\0' && wildcmp(&s1[i + 1], s2))
		{
			return (1);
		}
	}

	if (s1[i] == s2[i] && s1[i] != '\0')
	{
		return (wildcmp(&s1[i + 1], &s2[i + 1]));
	}

	return (0);
}
