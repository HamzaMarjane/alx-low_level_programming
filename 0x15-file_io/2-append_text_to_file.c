#include "main.h"
/**
 * append_text_to_file - text to the end of the file appending.
 * @filename: files names.
 * @text_content: text that should be appended.
 *
 * Return: 1 succes, -1 failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mrj0;
	ssize_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	mrj0 = open(filename, O_WRONLY | O_APPEND);

	if (mrj0 == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	bytes_written = write(mrj0, text_content, len);

	if (bytes_written == -1)
	{
		close(mrj0);
		return (-1);
	}

	close(mrj0);
	return (1);
}
