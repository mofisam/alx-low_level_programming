#include "main.h"
/**
 * _puts - the function that prints a string, followed by a new line
 * @str: string to evaluate
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
