#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix form
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int i, j;

	for (i = 0; i <= size; i++)
	{
		j = (i * size) + i;
		diagonal_sum_1 += a[j];
	}
	for (i = 0; i <= size; i++)
	{
		j = (i * size) - i;
		diagonal_sum_2 += a[j];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
