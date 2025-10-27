#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Finds and prints the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long maxFactor;
	long i;

	while (n % 2 == 0)
	{
		maxFactor = 2;
		n = n / 2;
	}

	i = 3;
	while (i * i <= n)
	{
		while (n % i == 0)
		{
			maxFactor = i;
			n = n / i;
		}
		i = i + 2;
	}

	if (n > 2)
	{
		maxFactor = n;
	}

	printf("%ld\n", maxFactor);

	return (0);
}
