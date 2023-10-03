#include "main.h"

/**
 * read_textfile - Reads a text file & prints it to the POSIX standard output.
 * @filename: The name of the file to open.
 * @letters: The number of bytes to read.
 *
 * Return: Number of bytes read and written to the output, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t lenRead, lenWrite;

	/* Check for NULL filename */
	if (filename == NULL)
		return (0);
	/* Open the file */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0); /* Failed to open file, return 0 */
	/*Allocate memory for the buffer */
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(file);
		/*Memory allocation failed, return 0 */
		return (0);
	}
	/* Read from the file */
	lenRead = read(file, buf, letters);
	if (lenRead == -1)
	{
		free(buf);
		close(file);
		return (0); /*Failed to read from file, return 0 */
	}
	/*Write to the standard output */
	lenWrite = write(STDOUT_FILENO, buf, lenRead);
	if (lenWrite == -1 || lenWrite != lenRead)
	{
		free(buf);
		close(file);
		return (0); /*Failed to write or incomplete write, return 0 */
	}
	/*Cleanup and close the file */
	free(buf);
	close(file);

	return (lenRead);
}
