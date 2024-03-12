#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @str: Function Parameter
 * Return: Always 0
 */

void puts2(char *str)
{
	int g = 0;
	int p;
	char *k = str;
	int o;

	while (*k != '\0')
	{
		k++;
		g++;
	}
	p = g - 1;
	for (o = 0 ; o <= p; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
