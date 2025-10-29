#include <stdio.h>
#include "main.h"
/**
* main - prints even number sum
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 1;
int b = 2;
int pair = 0;
int next;

while (b <= 4000000)
{
if (b % 2 == 0)
{
pair += b;
}

next = a + b;
a = b;
b = next;
}
printf("%d\n", pair);
return (0);
}
