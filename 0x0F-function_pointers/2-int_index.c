#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: This is the length of the array
 * @array: This is input array
 * @cmp: Is a pointer to the function to be used to compare values
 * Return: int_index returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
