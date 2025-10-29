#include "main.h"
/**
 * print_last_digit - egtregerget
 * @n: efrkojjoiefroijefroijefr
 * Return: always 0 (success)
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;

if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
