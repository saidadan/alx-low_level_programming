#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by commas
 * and spaces, starting with 1 and 2, followed by a newline. The program
 * uses the unsigned long long data type to handle large Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long first = 1ULL;   /* First Fibonacci number */
	unsigned long long second = 2ULL;  /* Second Fibonacci number */
	unsigned long long next;
	int i;
	/* Print the first two Fibonacci numbers separately */
	printf("%llu, %llu", first, second);

	/* Calculate and print the next Fibonacci numbers */
	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf(", %llu", next);

		/* Update the values for the next iteration */
		first = second;
		second = next;
	}

	/* Print a newline character at the end */
	printf("\n");

	return (0);
}
