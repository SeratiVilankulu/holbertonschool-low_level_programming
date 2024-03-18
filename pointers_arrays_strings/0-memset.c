#include "main.h"
#include <stdio.h>

/**
 * _memset - Function that fills memory with a constant byte
 * @s: address of memory
 * @b: desired value
 * @n: bytes changed
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
