#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Function that prints the numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	int v;

	for (v = 0; v < 9; v++)
	{
		putchar(v);
	}
	putchar('\n');
}
