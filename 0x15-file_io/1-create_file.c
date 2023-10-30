#include "main.h"

/**
 * create_file - function made to create a file.
 * @filename: pointer for naming a file.
 * @text_content: NULL terminated str.
 * Return: 1 or -1 succes or failure.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, num = 0;

	if (filename == NULL)

		return (-1);

	if (text_content != NULL)

	{

		for (num = 0; text_content[num];)

			num++;

	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(o, text_content, num);

	if (o == -1 || w == -1)

		return (-1);

	close(o);
	return (1);

}
