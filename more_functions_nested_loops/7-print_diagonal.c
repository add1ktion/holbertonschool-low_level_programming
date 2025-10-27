#include "main.h"
/**
* print_diagonal - prints backslash
* @n: numbers of backslash
*
*/
void print_diagonal(int n)
{
int backslash;

if (n > 0)
{
for (backslash = 0; backslash < n; backslash++)
_putchar('\\');
}
_putchar('\n');
}
