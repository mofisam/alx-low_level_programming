#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function that prints n elements of an array of integers
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
