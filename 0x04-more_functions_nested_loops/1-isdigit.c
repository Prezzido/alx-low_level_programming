#include "main.h"

/**
 * _isdigit  -  Checks if the input is a number (digit)
 * @c: char type number
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
