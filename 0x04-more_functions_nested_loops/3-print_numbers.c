#include "main.h"

/**
 * print_numbers - Prints a desired range of values
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
