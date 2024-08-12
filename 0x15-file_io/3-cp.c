#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd;
    char *buffer;
    ssize_t bytes_read, bytes_written;

    buffer = create_buffer(letters);
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (bytes_written);
}

/**
 * main - check the code
 * @ac: argument count
 * @av: argument values
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        return (1);
    }

    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);

    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);

    return (0);
}
