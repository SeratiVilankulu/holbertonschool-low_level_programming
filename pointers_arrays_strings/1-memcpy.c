#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Function that copies memory area
 * @dest: The address of memory to print
 * @src: The value to be copied
 * @n: The size of the memory to print
 * Return: 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int v = n;

		for (;h < v; h++)
		{
			dest[h] = src[h];
			n--;
		}
		return (dest);
}
