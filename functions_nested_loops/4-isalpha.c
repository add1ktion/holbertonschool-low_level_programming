#include "main.h"
/**
 * _isalpha - check if lower & upper
 * @c: char to check ASCII.
 * Return: always 1 if lower and 0 is not.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
