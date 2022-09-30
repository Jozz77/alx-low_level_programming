#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the mininum number of coin for change
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if arguments not up to 2
 */

int main(int argc, char *argv[])
{
	int n, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	n = atoi(argv[1]);

	cents += n / 25;
	n = n % 25;
	cents += n / 10;
	n = n % 10;
	cents += n / 5;
	n = n % 5;
	cents += n / 2;
	n = n % 2;
	cents += n / 1;

	printf("%d\n", cents);
	return (0);
}
