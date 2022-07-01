#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all single digits of base ten...
 * ...starting from zero
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	print('\n');

	return (0);
}
