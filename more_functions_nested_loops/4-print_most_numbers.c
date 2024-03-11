#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int g;

	for (g = 48; g <= 57; g++)
	{
		if (g != 50)
		{
			if (g != 52)
			{
				_putchar(g);
			}
		}
	}
	_putchar('\n');
}
