#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int o = 0;
	int v;

	while (o < 10)
	{
		for (v = 0; v <= 14; v++)
		{
			_putchar(v);
		}
		_putchar('\n');
	}
}
