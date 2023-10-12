#include <stdio.h>

/**
 * print_fibonacci_series - Prints the first 90 Fibonacci numbers
 */
void print_fibonacci_series(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	for (count = 1; count <= 90; count++)
	{
		printf("%lu", fib1);
		if (count < 90)
			printf(", ");
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");
}

/**
 * print_large_fibonacci_numbers - Prints the remaining large Fibonacci numbers
 */
void print_large_fibonacci_numbers(void)
{
	unsigned long fib1_half1 = 0, fib1_half2 = 1;
	unsigned long fib2_half1 = 0, fib2_half2 = 2;
	unsigned long half1, half2;

	for (int count = 91; count < 98; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%010lu", half1, half2);
		if (count < 97)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * Description: This program calculates and prints the first 98 Fibonacci
 * numbers, where each number is separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci_series();
	print_large_fibonacci_numbers();
	return (0);
}
