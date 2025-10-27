#include "main.h"
/**
* _strlen - lenght of a string
* @s: string to check
* Return: lenght of @s
*/
int _strlen(char *s)
{
int count = 0;

for (; *s != '\n'; s++)
{
count++;
}
return (count);
}
