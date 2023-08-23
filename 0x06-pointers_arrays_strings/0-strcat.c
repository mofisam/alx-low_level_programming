#include "main.h"
/**
 * *_strcat - A function that concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: This return to dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[i] = '\0';

	return (dest);
}
