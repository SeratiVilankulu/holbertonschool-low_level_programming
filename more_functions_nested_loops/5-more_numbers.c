#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int o, v;

	for (o = 0; o < 10; o++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v >= 10)
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
		}
		_putchar('\n');
	}
}
