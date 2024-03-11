#include "main.h"
#include <unistd.h>

/**
 * print_square - Function that prints a square, followed by a new line
 * @size: The variable to be checked
 * Return: Alway 0
 */

void print_square(int size)
{
	int x, y;

	x = 0;

	if (size < 1)
		_putchar('\n');

	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
