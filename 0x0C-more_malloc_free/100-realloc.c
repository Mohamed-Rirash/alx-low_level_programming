#include "main.h"
/**
 * _realloc - reallocate memory block
 * @ptr: pointer to address of memory block to reallocate
 * @old_size: previous size of the memory
 * @new_size: new size of the memory
 *
 * Description: a function that reallocates a memory block using malloc & free
 * Return: pointer to the new allocated memory
 * if ptr = NULL, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

