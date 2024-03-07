#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @k: number being checked
 * Return: 0 (Success)
 */

int print_last_digit(int k)
{
	int q;

	q = k % 10;
	if (q < 0)
	{
		q = q * -1;
	}
	_putchar(q + '0');
	return (q);
}
