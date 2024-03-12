#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers
 * @a: Character to be swapped
 * @b: Character to be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
