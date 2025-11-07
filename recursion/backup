#include "main.h"
/**
 * wildcmp - Compares strings
 * @s1: String to compare
 * @s2: String to compare
 *
 * Return: 1 if not identical, 0 if identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 == '\0' && wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		return (0);
	}

	if (*s1 == *s2 && *s1 != '\0')
	{
		return (wildcmp(s1, s2 + 1));
	}

	return (0);
}
