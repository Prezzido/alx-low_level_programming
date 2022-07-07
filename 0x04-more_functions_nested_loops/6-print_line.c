#include "main.h"

/**
 * print_line - draws a straight line
 * @n: The number of times the underscore is printed
 * Description: Can only use _putchar to print
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
