#include "main.h"

#define MAXSIZE 1024
#define E STDERR_FILENO

/**
 * main - copy file content into another file
 * @argc: integer, number of arguments
 * @v: pointer to an array of string pointers
 *
 * Return: 0 on success | 97, if less arguments given | 98, if file_from fails
 * | 99, if write to file_to fails | 100, if file descriptor can not close
 */
int main(int argc, char *v[])
{
	int fd1, fd2;
	char *buff[MAXSIZE];
	ssize_t bytes;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(E, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(v[1], O_RDONLY);
	if (fd1 < 0)
		dprintf(E, "Error: Can't read from file %s\n", v[1]), exit(98);

	fd2 = open(v[2], O_WRONLY | O_TRUNC | O_CREAT, mode);
	if (fd2 < 0)
		dprintf(E, "Error: Can't write to %s\n", v[2]), exit(99);

	while ((bytes = read(fd1, buff, MAXSIZE - 1)) > 0)
	{
		buff[bytes] = '\0';
		if (write(fd2, buff, bytes) != bytes)
		{
			dprintf(E, "Error: Can't write to %s\n", v[2]);
			exit(99);
		}
	}

	if (bytes < 0)
		dprintf(E, "Error: Can't read from file %s\n", v[1]), exit(98);

	if ((close(fd1)) < 0)
		dprintf(E, "Error: Can't close fd %d\n", fd1), exit(100);
	if ((close(fd2)) < 0)
		dprintf(E, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}

