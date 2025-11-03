#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to the pointer that will point to the new string
 * @to: Pointer to the string to assign
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
