#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: Function parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int l;
	int count = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		count++;
	}
	for (l = count - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
		_putchar('\n');
}
