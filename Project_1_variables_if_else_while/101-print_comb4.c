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
int nombreA, nombreB, nombreC;

for (nombreA = '0'; nombreA <= '9'; nombreA++)
{
for (nombreB = '0'; nombreB <= '9'; nombreB++)
{
for (nombreC = '0'; nombreC <= '9'; nombreC++)
{
if (nombreA < nombreB && nombreB < nombreC)
{
putchar(nombreA);
putchar(nombreB);
putchar(nombreC);

if (nombreA != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}
