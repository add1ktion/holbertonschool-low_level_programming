#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of command line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on success, exits with 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	unsigned char *ptr = (unsigned char *)main;
	int i = 0, n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n)
	{
		printf("%02x", ptr[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}

	printf("\n");

	return (0);
}
