#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Randomly generates valid passwords
 * Decription: Program to randomly generate password...
 * ...for another program (101-crackme)
 * Return: Null
 */

int main(void)
{
	int myrand;
	int counter;
	int total;

	srand(time(NULL));
	for (counter = 0, total = 2772; total > 122; counter++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
