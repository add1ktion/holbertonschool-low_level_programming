#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_array - Prints the content of an array
* @a: Array to print
* @n: Number of char to print
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
}
