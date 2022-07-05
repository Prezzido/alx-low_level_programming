#include "main.h"
/**
 * _isalpha - checks if the input is an alphabet
 * @c: char type letter
 * Description: Returns 1 if c is a letter (lower or uppercase)
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
