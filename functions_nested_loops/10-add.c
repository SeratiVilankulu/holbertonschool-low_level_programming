#include "main.h"
#include <stdio.h>

/**
 * add - Function that adds two integers and returns the result
 * @s: number to be calculated
 * @g: number to be calculated
 * Return: 0 (Success)
 */

int add(int s, int g)
{
	int result;

	result = s + g;
	_putchar(result + '0');
	return (result);
}
