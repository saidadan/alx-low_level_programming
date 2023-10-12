#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by commas
 * and spaces, starting with 1 and 2, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1;      /* First Fibonacci number */
	int second = 2;     /* Second Fibonacci number */
	int next;           /* Variable to store the next Fibonacci number */
	int i;              /* Loop counter */

	/* Print the first two Fibonacci numbers separately */
	printf("%d, %d", first, second);

	/* Calculate and print the next Fibonacci numbers */
	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf(", %d", next);

		/* Update the values for the next iteration */
		first = second;
		second = next;
	}

	/* Print a newline character at the end */
	printf("\n");

	return (0);
}
