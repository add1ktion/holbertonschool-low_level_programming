#include <stdio.h>
/**
 * main - Prints the number of arguments and then each argument
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
