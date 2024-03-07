#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: number to be checked
 * Return: 1 if n is positive, 0 if n is zero or -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
