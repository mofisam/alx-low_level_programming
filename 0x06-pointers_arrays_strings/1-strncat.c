#include "main.h"
#include <stdio.h>
/**
 * _strncat - Write a function that concatenates two strings
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[j] != '\n' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}
