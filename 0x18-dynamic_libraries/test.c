#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printf - Custom printf function that simulates a jackpot message.
 * @format: The format string (not used in this implementation).
 *
 * This function writes a predefined message to standard output
 * and exits the program with success status.
 *
 * Return: This function does not return a value as it exits the program.
 */

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 -9 \n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}

