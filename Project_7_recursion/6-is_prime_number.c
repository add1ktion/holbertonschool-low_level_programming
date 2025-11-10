#include "main.h"

int check_divisor(int n, int i);
/**
 * is_prime_number - Checks if n is prime
 * @n: Integer to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_divisor(n, 2));
}

/**
 * check_divisor - Teste récursivement si n a un diviseur
 * @n: Nombre à tester
 * @i: Diviseur actuel à tester
 *
 * Return: 1 si aucun diviseur trouvé (premier), 0 si diviseur trouvé
 */
int check_divisor(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_divisor(n, i + 1));
	}
}
