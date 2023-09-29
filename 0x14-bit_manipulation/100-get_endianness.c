#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: Return 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    unsigned int digit = 1;

    /* Convert the memory address of the int digit into a pointer to a char */
	char *data = (char *)&digit;

	if (*data)
	{
        /* If the first byte (char) of the integer is non-zero, it's little endian */
    	return (1);
    }
    else
    {
        /* If the first byte (char) of the integer is zero, it's big endian */
        return (0);
    }
}
