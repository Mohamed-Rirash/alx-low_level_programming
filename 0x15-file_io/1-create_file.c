#include "main.h"

/**
 * _strlen - length of a string
 * @str: pointer to a string
 *
 * Return: integer, str length
 */
size_t _strlen(char *str)
{
	size_t len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * create_file - creates a file if it doesn't exist
 * @filename: string, array for characters to name file
 * @text_content: string, contents to write into the file
 *
 * Return: integer, 1 on success,
 * - -1 on failure | if filename == NULL | write fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		close(fd);
		if (bytes_written == -1)
			return (-1);
	}
	return (1);
}

