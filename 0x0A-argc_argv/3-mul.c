#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", argv[1] * argv[2]);

	return (0);
}
