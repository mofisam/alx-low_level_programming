#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: This is the input string
 * Return: Result is the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
