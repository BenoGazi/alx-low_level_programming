#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argv: argument vector
 * @argc: argument count
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i, j, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	output = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	j = 0;
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			output++;
			i -= coins[j];
		}
	}
	printf("%d\n", output);
	return (0);
}
