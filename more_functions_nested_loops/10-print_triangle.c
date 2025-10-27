#include "main.h"
/**
* print_triangle - prints a triangle made of ' ' and #
* @size: size of triangle
*/
void print_triangle(int size)
{
int diese, space;

if (size > 0)
{
for (diese = 1; diese <= size; diese++)
{
for (space = size - diese; space > 0; space++)
_putchar(' ');
for (space = 0; space < diese; space++)
_putchar('#');
if (diese == space)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
