#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_buffer - creates a buffer of a specified size
 * @size: size of the buffer to be created
 *
 * Return: pointer to the created buffer
 */
char *create_buffer(size_t size)
{
	char *buffer;

	buffer = malloc(size);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't allocate buffer\n");
		exit(1);
	}

	return (buffer);
}
