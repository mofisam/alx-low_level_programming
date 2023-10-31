#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise, it returns the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, read_b, write_b;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	read_b = read(file_desc, buffer, letters);
	write_b = write(STDOUT_FILENO, buffer, read_b);

	if (file_desc == -1 || read_b == -1 || write_b == -1 || write_b != read_b)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_desc);

	return (write_b);
}
