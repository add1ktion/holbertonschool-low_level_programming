#include "main.h"
/**
 * print_times_table - tables de multiplications
 * @n: nombre de mult max
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
int x, i, res;

if (n < 0 || n > 15)
return;

for (x = 0; x <= n; x++)
{
for (i = 0; i <= n; i++)
{
res = x * i;

if (i == 0)
_putchar(res + '0');
else
{
_putchar(',');
_putchar(' ');
if (res < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res < 100)
{
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else
{
_putchar((res / 100) + '0');
_putchar(((res / 10) % 10) + '0');
_putchar((res % 10) + '0');
}
}
}
_putchar('\n');
}
}