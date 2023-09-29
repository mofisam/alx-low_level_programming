#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to be changed.
 * @index: The index (starting from 0) of the bit you want to clear.
 *
 * Return: Return -1 for an error if the index is out of range
 * or return 1 to indicate success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masked;

	/**
	 * Checks if the index is within the range of the
	 * number of bits in the data type
	 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Create masked to clear the bit at the given index */
	masked = ~(1UL << index);

	/* Use bitwise AND (&) to clear the bit at the given index */
	*n &= masked;

	return (1);
}
