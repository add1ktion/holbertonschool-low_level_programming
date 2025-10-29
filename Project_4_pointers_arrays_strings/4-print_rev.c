#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_rev - Prints a string in reverse
* @s: The string to print
*
* Return: void
*/
void print_rev(char *s)
{
int i;
int l = 0;

while (s[l] != '\0')
{
l++;
}

for (i = l - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
