#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98 from n
 * @n: starting number
 * Return: prints number blabla
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("%d\n", n);
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d\n", n);
}
}
