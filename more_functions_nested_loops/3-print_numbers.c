#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Function that prints the numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	int v;

	for (v = 48; v <= 58; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
