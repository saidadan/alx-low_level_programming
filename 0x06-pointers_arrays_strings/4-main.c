#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function prints the elements of an integer array.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}

/**
 * reverse_array - Reverses the order of elements in an array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
*Description: This function reverses elements in an integer array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int n = sizeof(a) / sizeof(int);

	printf("Original array: ");
	print_array(a, n);

	reverse_array(a, n);

	printf("Reversed array: ");
	print_array(a, n);

	return (0);
}
