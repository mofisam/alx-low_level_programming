#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: String to search
 * @c: This is the character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
