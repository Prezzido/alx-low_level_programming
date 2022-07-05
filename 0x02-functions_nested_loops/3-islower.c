#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: char type letter
 * Description - Returns 1 if c is lowercase or 0 if otherwise
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
