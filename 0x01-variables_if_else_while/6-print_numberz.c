#include <stdio.h>
/**
 * main - Entry point
 * Return: is 0
 */
int main(void)
{
	int num = '0';

	for (num; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
