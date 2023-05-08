#include "main.h"

/**
 * append_text_to_file - function that appends a text to file
 * @filename: name of the file to be appended
 * @text_content: text to append
 * Return: 1 in success, -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fda, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fda = write(fdo, text_content, len);
	close(fdo);
	if (fda < 0)
		return (-1);

	return (1);
}
