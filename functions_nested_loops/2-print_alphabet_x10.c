#include <unistd.h>
#include "main.h"
/**
* print_alphabet - affiche l'alphabet
*
* Return: always 0.
*/
void print_alphabet_x10(void)
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
