#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *range;

	if (min > max)
		return (NULL);
	b = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		range[a] = b;
		b++;
	}
	return (range);
}
