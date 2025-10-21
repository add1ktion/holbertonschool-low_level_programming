#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - affiche l'alphabet
 *
 * Return: always 0.
 */
void times_table(void)
{
char c;
int multi;

for (multi = 0; multi < 10; multi++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
