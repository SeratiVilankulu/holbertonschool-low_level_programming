#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int s, v, g, m;

	for (s = 0; s <= 2; s++)
	{
	for (g = 0; g <= 9; g++)
	{
		if ((s <= 1 && g <= 9) || (s <= 2 && g <= 3))
		{
			for (m = 0; m <= 5; m++)
			{
			for (v = 0; v <= 9; v++)
			{
			_putchar(s + '0');
			_putchar(g + '0');
			_putchar(58);
			_putchar(m + '0');
			_putchar(v + '0');
			_putchar('\n');
			}
			}
		}
	}
	}
}
