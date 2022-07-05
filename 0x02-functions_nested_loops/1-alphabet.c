#include "main.h"
/**
 * print_alphabet - uses print_alphabet as function in main.h
 * Description - Prints alphabets in lowercase using `_putchar`
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
