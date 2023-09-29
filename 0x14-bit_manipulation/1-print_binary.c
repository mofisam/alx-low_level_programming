#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary format
 */
void print_binary(unsigned long int n)
{
	int i = 0;

	/* Locate position of the leftmost 1 in the binary string */
	while ((n >> i) > 1)
	{
		i++;
	}

	/* Prints the binary representation of the number */
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1'); /*Print '1' if the current bit is 1*/
		}
		else
		{
			_putchar('0');/*Print '0' if the current bit is 0*/
		}
		/* Move to the next bit position towards the right */
		i--;
	}
}
