#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single digits of base 10 using putchar
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
