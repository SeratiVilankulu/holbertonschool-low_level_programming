#include "main.h"
#include <unistd.h>

/**
 * print_triangle - Function that prints a triangle, followed by a new line
 * @size: Size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int h, i;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < h; i++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
