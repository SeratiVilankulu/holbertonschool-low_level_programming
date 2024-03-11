#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Function that prints the numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	int v;

	for (v = 0; v < 9; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
