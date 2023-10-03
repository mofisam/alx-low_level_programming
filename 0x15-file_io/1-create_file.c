#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, lenWrite, lenText;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Open the file with the appropriate permissions */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
