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
int nombreA, nombreB, nombreC, nombreD;

for (nombreA = '0'; nombreA <= '9'; nombreA++)
{
for (nombreB = '0'; nombreB <= '9'; nombreB++)
{
for (nombreC = '0'; nombreC <= '9'; nombreC++)
{
for (nombreD = '0'; nombreD <= '9'; nombreD++)
{

if (nombreA <= nombreC && nombreB < nombreD)
{
putchar(nombreA);
putchar(nombreB);
putchar(' ');
putchar(nombreC);
putchar(nombreD);

if (!(nombreA == '9' && nombreB == '8' && nombreC == '9' && nombreD == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');

return (0);
}
