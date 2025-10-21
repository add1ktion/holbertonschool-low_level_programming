#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - check si minuscule
 * @c: carac to check ASCII.
 * Return: always 1 if lower and 0 is not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
