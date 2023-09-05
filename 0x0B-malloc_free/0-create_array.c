#include <stdlib.h>
#include "main.h"
/**
 * *create_array -  function that creates an array of chars, and initializes
 * @size: size of the array
 * @c: char to initialize the array c
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (0);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}

	*(array + i) = '\0';

	return (array);
}
