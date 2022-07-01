#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: The Program prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char i, n;

	i = 0;
	n = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
