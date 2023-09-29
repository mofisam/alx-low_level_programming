#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index (starting from 0) of the bit you want to get.
 *
 * Return: The value of the bit at the given index (1 or 0),
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 * Checks if the index is within the range
	 * of the number of bits in the data type
	 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/*Right shift the number n by index bits */
	n >>= index;

	/**
	 * Check if the bit at the rightmost end is 1,
	 * return 1, otherwise, return 0
	 */
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
