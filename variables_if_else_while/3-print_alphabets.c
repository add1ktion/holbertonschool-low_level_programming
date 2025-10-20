#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char lettre, lettreMaj;

for (lettre = 'a'; lettre <= 'z'; lettre++)
{
putchar(lettre);
}

for (lettreMaj = 'A'; lettreMaj <= 'Z'; lettreMaj++)
{
putchar(lettreMaj);
}
putchar('\n');

return (0);
}
