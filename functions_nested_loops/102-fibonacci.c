#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * fibonacci - prints the first n Fibonacci numbers
 * @n: number of Fibonacci numbers to print
 */
void fibonacci(int n)
{
unsigned long a = 1, b = 2, next;
int count;

for (count = 0; count < n; count++)
{
if (count == 0)
next = a;
else if (count == 1)
next = b;
else
{
next = a + b;
a = b;
b = next;
}
printf("%lu", next);
if (count < n - 1)
printf(", ");
}
printf("\n");
}

/**
 * main - Entry point, prints first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
fibonacci(50);
return (0);
}

