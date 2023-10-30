#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argumen vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%i\n", sum);
	return (0);
}
