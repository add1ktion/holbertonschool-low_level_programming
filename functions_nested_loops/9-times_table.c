#include "main.h"
/**
 * times_table - table de multiplications
 *
 * Return: always 0 (success)
 */
void times_table(void)
{
int n, i, res;

for (n = 0; n <= 9; n++)
{
for (i = 0; i <= 9; i++)
{
res = n * i;

if (res < 10)
{
if (i != 0)
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}

if (i != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
