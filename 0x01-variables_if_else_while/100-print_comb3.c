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

	i = 0;

	while (i <= 99)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(j + '0');
			putchar(k + '0');
			i++;

			if (i <= 88)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
