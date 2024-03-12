#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: Always 0
 */
void puts_half(char *str)
{
	int a, n, big;

	big = 0;

	for (a = 0; str[a] != '\0'; a++)
		big++;

	n = (big / 2);

	if ((big % 2) == 1)
		n = ((big + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

