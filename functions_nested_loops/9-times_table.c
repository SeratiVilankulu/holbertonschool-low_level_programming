#include "main.h"

/**
*times_table - Function that prints the 9 times table
*Return: 0 (Success)
*/

void times_table(void)
{
	int f, d, w, u, e;

	for (f = 0; f <= 9; f++)
	{
	for (d = 0; d <= 9; d++)
	{
	w = f * d;
	if (w > 9)
	{
		u = w % 10;
		e = (w - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(e + '0');
		_putchar(u + '0');
	}
	else
	{
	if (d != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(w + '0');
	}
	}
	_putchar('\n');
	}
}
