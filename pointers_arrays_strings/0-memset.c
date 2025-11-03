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
	unsigned int i = 0;
	unsigned char *memory = s;

	while (n > 0)
	{
		*memory = b;
		memory++;
		n--;
	}
	return (s);
}
