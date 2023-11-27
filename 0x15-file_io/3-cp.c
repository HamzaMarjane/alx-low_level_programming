#include "main.h"
/**
 * main - copies the text in a file like cp on linux
 *
 * @argc: the number of arguments.
 * @argv: argv arguments.
 * Return: Succes always 0.
 */
int main(int argc, char *argv[])
{
	int mrj1, mrj2, chars_read, chars_written, file_closed, file2_closed;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	mrj1 = open(argv[1], O_RDONLY, 0);
	if (mrj1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	mrj2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (mrj2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((chars_read = read(mrj1, buf, 1024)) > 0)
	{
		chars_written = write(mrj2, buf, chars_read);
		if (chars_written != chars_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_closed = close(mrj1);
	if (file_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", mrj1), exit(100);
	file2_closed = close(mrj2);
	if (file2_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", mrj2), exit(100);
	return (0);
}
