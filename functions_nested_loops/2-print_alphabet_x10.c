#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *Return: void
 */

void print_alphabet_x10(void)
{
	char p;
	int v = 0;

	while (v < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
	_putchar('\n');
	v++;
	}
}
