#include "main.h"
/**
 * main - print '_putchar' followed by a new line
 * The Use of any standard library is forbidden
 * Return: 0
 */

int main(void)
{
	char putchar[] = " _putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
