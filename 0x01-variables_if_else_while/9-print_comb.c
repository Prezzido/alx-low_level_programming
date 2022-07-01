#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Desrcription: Prints all possible combinations of single digit numbers
 * Only putchar is allowed
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;


		if (n < 10)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
