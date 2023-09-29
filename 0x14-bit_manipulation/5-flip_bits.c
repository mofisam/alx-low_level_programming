#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: Return the count of differing bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*XOR the two numbers to find the differing bits*/
	unsigned long int op_xor = n ^ m;
	/*Initialize a my_counter for counting set bits (1s)*/
	unsigned int my_counter = 0;

	/**
	 * Count the number of set bits (bits with a value of 1)
	 * in op_xor (XOR result)
	 */
	while (op_xor)
	{
		/**
		 * Check if the last bit is 1 (using bitwise AND)
		 * and increment the my_counter
		 */
		my_counter += (op_xor & 1);

		/*Right shift the bits of op_xor by 1 to check the next bit */
		op_xor >>= 1;
	}

	return (my_counter);
}
