#include "shell.h"

/**
 * bfree - frees all pointers
 * @ptr: address of the pointer to be freed
 *
 * Return: 1 if freed, otherwise 0 always.
 */

int bfree(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
