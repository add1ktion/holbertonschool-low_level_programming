#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: erger
 * Return: void
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
}
