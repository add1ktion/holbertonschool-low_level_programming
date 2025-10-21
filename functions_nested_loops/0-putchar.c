#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *str = "_putchar";
int pChar = 0;

while (str[pChar] != '\0')
{
_putchar(str[pChar]);
pChar++;
}
 _putchar('\n');
return (0);
}
