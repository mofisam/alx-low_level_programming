#include "main.h"
/**
 * print_array - A function that prints n elements of an array of integers
 * @a: input array
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
