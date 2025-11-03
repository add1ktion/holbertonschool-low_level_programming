#include "main.h"
/**
* _memset - Fills memory with constant byte
* @s: String
* @b: String to add to dest
* @n: dffs
* Return: dest
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}
