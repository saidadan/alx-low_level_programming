#include "main.h"

/**
 * main - Entry point to check if _islower function works.
 *
 * Return: Always 0.
 */
int _islower(int c); /* Function prototype*/

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

