#include <stdio.h>
/**
 * main - main block
 * Description: Prints the alphabets in lowercase...
 * ...except q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z' || c != 'q' || c != 'e')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
