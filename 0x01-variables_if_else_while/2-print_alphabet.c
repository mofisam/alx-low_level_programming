#include <stdio.h>
/**
 * main - Entry point
 * Descripption - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
