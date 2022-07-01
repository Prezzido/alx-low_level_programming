#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints numbers from 0 to 99 distinctively
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	j = i / 10;
	k = i % 10;

	for (i = 0; i <= 99; i++)
	{
		putchar(j + '0');
		putchar(k + '0');


		if (i <= 99)
		{
			putchar(44);
			putchar(32);
		}

	}
	putchar('\n');

	return (0);
}
