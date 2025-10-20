#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
int dernierChiffre = abs(n % 10);

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, dernierChiffre);
else if (n % 10  == 0)
printf("Last digit of %d is %d and is 0\n", n, dernierChiffre);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dernierChiffre);

return (0);
}
