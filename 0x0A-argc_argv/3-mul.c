#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always return 0;
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
