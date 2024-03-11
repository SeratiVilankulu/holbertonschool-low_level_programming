#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: The charcter to be checked
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int u, t;

		for (u = 0; u < n; u++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == u)
					_putchar('\\');
				else if (t < u)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
