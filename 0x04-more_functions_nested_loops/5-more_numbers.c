#include "main.h"

/**
 * more_numbers - Displays the desired range of values
 * Description: Print the numbers from 0 to 14, 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		i = 0;

		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar('\n');
			i++;
		}
		j++;

		_putchar('\n');
	}
}
