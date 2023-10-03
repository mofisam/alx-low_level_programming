#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, lenWrite, lenText;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);
	/* Open the file for read and write, and append if it exists */
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1); /* Failed to open or create file, return -1 */
	/* Check for NULL text_content */
	if (text_content != NULL)
	{
		/* Find the length of the text_content */
		for (lenText = 0; text_content[lenText] != '\0'; lenText++)
			;
		/* Write to the file */
		lenWrite = write(file, text_content, lenText);
		if (lenWrite == -1 || lenWrite != lenText)
		{
			close(file);
			return (-1); /* Failed to write or incomplete write, return -1 */
		}
	}
	/* Close the file and return success */
	close(file);
	return (1);
}
