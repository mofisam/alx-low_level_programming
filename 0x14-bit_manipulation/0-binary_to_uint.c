#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The decimal representation of the binary string, or 0 if invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	 /*Initialize the decimal result */
	unsigned int decimal = 0;
	/*Initialize the multiplier (2^0)*/
	int multiplicador = 1;
	/*Initialize an index for iterating through the string*/
	int index = 0;

	/*Check if the input string is NULL*/
	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		/*Check if characters in the string are not binary (0 or 1)*/
		if (b[index] != '0' && b[index] != '1')
			return (0); /*Return 0 for invalid binary string*/
	}

	for (index = index - 1; index >= 0; index--)
	{
		/*Get the current character from the end of the string*/
		char currentCharacter = b[index];

		if (currentCharacter == '1')
		{
			/**
			 * If the current character is '1',
			 * add the corresponding value to the result
			 */
			decimal += multiplicador;
		}

		/*Multiply the multiplier by 2 for the next binary digit*/
		multiplicador = multiplicador * 2;
		/*Check if we have reached the first character in the string*/
		if (index == 0)
			break; /*Exit the loop if we have processed all characters*/
	}

	return (decimal);
}

