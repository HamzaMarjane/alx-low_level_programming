#include "main.h"

/**
 *read_textfile - Read the content or printing it like cat in linux.
 *
 * @filename: pointer to the file name to be read.
 * @letters: number maximal of letters to be read or printed to stdout.
 *
 *Return: 0 if it fails or the number of printed chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int mrj0;
	char *buffer;
	ssize_t chars_read, chars_written;

	if (filename == NULL)
		return (0);

	mrj0 = open(filename, O_RDONLY);
	if (mrj0 == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	chars_read = read(mrj0, buffer, letters);
	if (chars_read == -1)
		return (0);

	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written == -1 || chars_written != chars_read)
		return (0);

	free(buffer);
	close(mrj0);

	return (chars_written);
}
