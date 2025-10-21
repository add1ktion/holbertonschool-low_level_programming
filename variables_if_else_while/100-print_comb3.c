#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints conbinaison of numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
int nombreA, nombreB;

for (nombreA = '0'; nombreA <= '9'; nombreA++)
{
for (nombreB = '0'; nombreB <= '9'; nombreB++)
{
if (nombreA < nombreB)
{
putchar(nombreA);
putchar(nombreB);

if (nombreA != '8' || (nombreA == '8' && nombreB != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
