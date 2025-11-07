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
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if ((*s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	if (*s1 == *s2 && *s1 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
