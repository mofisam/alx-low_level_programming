#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - function allocates memory for an array of nmemb 
 * elements of size
 * @nmemb: the length to allocate in the memory
 * @size: the size of casting to save
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	call = malloc(b);
	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}
