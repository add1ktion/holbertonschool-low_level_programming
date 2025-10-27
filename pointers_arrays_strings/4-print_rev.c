#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _puts - Prints a string
* @str: The string to print
*
* Return: void
*/
void print_rev(char *s)
{
int i, l;

l = _strlen(s);

for (i = l - 1; i >= 0; i--)
{
    _putchar(s[i]);
}
_putchar('\n');
}