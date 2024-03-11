#include "main.h"
#include <unistd.h>

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: The character to be checked
 * Return: Always 0
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	} else
	{
		int p;

		for (p = 1; p < n; p++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
