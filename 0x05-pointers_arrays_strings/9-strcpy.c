#include "main.h"

/**
 * _strcpy - copy str1 into str2
 * @dest: string to copy into
 * @src: string to copy from
 * Description:  a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (&dest[0]);
}

