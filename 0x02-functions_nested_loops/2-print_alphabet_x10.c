#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Returns: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'z';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
