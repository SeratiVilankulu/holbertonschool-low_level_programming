#include "main.h"
#include <stdio.h>

/**
 * _abs - Function that computes the absolute value of an integer
 * @r: number to be checked
 * Return: 0 (Success)
 */

int _abs(int r)
{
	if (r < 0)
	{
		int abs;

		abs = r * -1;
		_putchar(abs);
	}
	return (0);
}
