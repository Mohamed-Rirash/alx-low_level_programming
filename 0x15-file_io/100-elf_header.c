#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

#define SE STDERR_FILENO

int mission_execute(unsigned char *b);
int decrypt_magic(unsigned char *b);
int decrypt_class(unsigned char *b);
int decrypt_data(unsigned char *b);
int decrypt_version(unsigned char *b);
int decrypt_osabi(unsigned char *b);
int decrypt_type(unsigned char *b);
int decrypt_address(unsigned char *b);

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: pointer to an array of string pointers
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	unsigned char *buff;

	if (argc != 2)
	{
		dprintf(SE, "Usage: ./elf_header executable_file\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(SE, "Error: Can't open file %s\n", argv[1]), exit(98);

	lseek(fd, 0, SEEK_SET);

	buff = (unsigned char *) malloc(33 * sizeof(*buff));
	if (buff == NULL)
		dprintf(SE, "Error: Heap memory shortage\n"), exit(98);

	bytes_read = read(fd, buff, 32);
	if (bytes_read != 32)
		dprintf(SE, "Error: Can't read file %s\n", argv[1]), exit(98);
	buff[bytes_read] = '\0';

	mission_execute(buff);

	if (close(fd) == -1)
		dprintf(SE, "Error: Can't close file %s\n", argv[1]), exit(98);

	free(buff);

	return (0);
}

/**
 * mission_execute - decipher the executable
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int mission_execute(unsigned char *b)
{

	if (b[0] != 127 && b[1] != 'E' && b[2] != 'L' && b[3] != 'F')
		dprintf(SE, "Error: file not of type 'ELF'\n"), exit(98);
	printf("ELF Header:\n");
	decrypt_magic(b);
	decrypt_class(b);
	decrypt_data(b);
	decrypt_version(b);
	decrypt_osabi(b);
	decrypt_type(b);
	decrypt_address(b);
	return (0);
}

/**
 * decrypt_magic - extract and print magic hex digits
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: O, always
 */
int decrypt_magic(unsigned char *b)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", b[i]);
		if (i != 15)
			printf(" ");
	}
	printf("\n");
	return (0);
}

/**
 * decrypt_class - extract and print bit class
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_class(unsigned char *b)
{
	printf("  Class:\t\t\t     ELF");
	switch (b[4] + '0')
	{
		case '1':
			printf("32\n");
			break;
		case '2':
			printf("64\n");
			break;
		default:
			printf("NONE\n");
			break;
	}
	return (0);
}

/**
 * decrypt_data - extract and print endian
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_data(unsigned char *b)
{
	printf("  Data:\t\t\t\t     ");
	switch (b[5] + '0')
	{
		case '1':
			printf("2's complement, little endian\n");
			break;
		case '2':
			printf("2's complement, big endian\n");
			break;
		default:
			printf("unknonwn data format\n");
			break;
	}
	return (0);
}

/**
 * decrypt_version - extract and print file version
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_version(unsigned char *b)
{
	printf("  Version:\t\t\t     ");
	if ((b[6]) == EV_CURRENT)
		printf("%d (current)\n", EV_CURRENT);
	else
		printf("%d (invalid)\n", EV_CURRENT);
	return (0);
}

/**
 * decrypt_osabi - extract and print OS ABI info
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_osabi(unsigned char *b)
{
	unsigned char c = b[7];

	printf("  OS/ABI:                            ");
	if (c == 0)
		printf("UNIX - System V\n");
	else if (c == 1)
		printf("UNIX - HP-UX\n");
	else if (c == 2)
		printf("UNIX - NetBSD\n");
	else if (c == 3)
		printf("UNIX - Linux\n");
	else if (c == 6)
		printf("UNIX - Solaris\n");
	else if (c == 7)
		printf("UNIX - AIX\n");
	else if (c == 8)
		printf("UNIX - IRIX\n");
	else if (c == 9)
		printf("UNIX - FreeBSD\n");
	else if (c == 10)
		printf("Compaq TRU64 UNIX\n");
	else if (c == 11)
		printf("Novell Modesto\n");
	else if (c == 12)
		printf("UNIX - OpenBSD\n");
	else if (c == 64)
		printf("ARM EABI\n");
	else if (c == 97)
		printf("ARM\n");
	else if (c == 255)
		printf("Standalone\n");
	else
		printf("<unknown: %d>\n", c);

	printf("  ABI Version:\t\t\t     %d\n", b[8]);
	return (0);
}

/**
 * decrypt_type - extract and print object file type
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_type(unsigned char *b)
{
	char type = b[16];

	if (b[5] == 1)
		type = b[16];
	else
		type = b[17];

	printf("  Type:\t\t\t\t     ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);

	return (0);
}

/**
 * decrypt_address - extract and print file entry point address
 * @b: pointer to an array of characters representing exe header info
 *
 * Return: 0, always
 */
int decrypt_address(unsigned char *b)
{
	int i, start, mark = 0;
	char c;

	printf("  Entry point address:               0x");

	c = b[4] + '0';
	start = 31;
	for (i = start; i >= 24; i--)
	{
		if (b[i] == 0 && mark == 0)
			continue;
		if (c == '1')
			printf("%x", b[i]), mark++;
		else if (c == '2')
			printf("%02x", b[i]), mark++;
	}
	if (mark == 0 || c == 1)
		printf("0");
	printf("\n");
	return (0);
}

