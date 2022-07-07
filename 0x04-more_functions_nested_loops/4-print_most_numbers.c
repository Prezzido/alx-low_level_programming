#include "main.h"

/**
 * print_most_numbers - A function that prints a desired range of numbers
 * Description: Prints numbers from 0 to 9 excluding 2 and 4...
 * ...and ends with a new line
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
	if ((i != 2) && (i != 4))
		_putchar(i + '0');
	}

	_putchar('\n');
}
