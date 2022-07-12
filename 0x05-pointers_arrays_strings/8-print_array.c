#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by commas and space
 * Numbers should be displayed in the order they are stored in the array
 * You can only use _putchar to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i < n, i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
