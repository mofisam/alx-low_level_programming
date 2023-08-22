#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: this is the input string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
