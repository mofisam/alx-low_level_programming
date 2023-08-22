#include "main.h"
/**
 * _puts - the function that prints a string, followed by a new line
 * @s: string to evaluate
 * Return: the length of the string
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
