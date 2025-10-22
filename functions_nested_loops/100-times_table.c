#include "main.h"
/**
 * print_times_table - tables de multiplications
 * @n: yes
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

if (res < 10)
{
if (i != 0)
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res < 100)
{
if (i != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else
{
if (i != 0)
{
_putchar(' ');
}
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
_putchar((res % 10) + '0');
}

if (i != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
