#include "main.h"

/**
 * _atoi - Converts a string to integer
 * @s: char array string
 * Description: Number in the string can be preceeded...
 * ...by an infinite number of characters
 * All -/+ signs before the number are taken into account
 * If there are no numbers in the string, return 0
 * Return: First integer found in the string
 */

int _atoi(char *s)
{
	int i;
	int sign, val;

	sign = 1;
	val = 0;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
	}


	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			val = val * 10 + sign * (s[i] - '0');
		if (val != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (val);
	}

	return (val);
}
