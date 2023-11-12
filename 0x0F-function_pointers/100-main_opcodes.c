#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 * Return: operation code
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *args;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	args = (char *)main;
	i = 0;
	while (args[i] != '\0' && i < j)
	{
		printf("%02hhx", args[i]);
		i++;
	}
	printf("\n");
	return (0);
}
