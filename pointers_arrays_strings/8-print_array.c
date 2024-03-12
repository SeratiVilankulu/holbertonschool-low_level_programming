#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array
 * @a: Function parameter
 * @n: Function parameter
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", a[y]);
	}
		if (y == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
