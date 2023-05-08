#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: 1 in success, or -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);

	return (1);
}
