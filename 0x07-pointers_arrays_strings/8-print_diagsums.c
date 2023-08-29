#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints d sum of d 2 diagonals of square matrix of integers
 * @a: square matrix of which we print
 * @size: size of d matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
