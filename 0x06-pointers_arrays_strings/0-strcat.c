#include "main.h"
#include <stdio.h>
/**
 * _strcat - A function that concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: This return to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
