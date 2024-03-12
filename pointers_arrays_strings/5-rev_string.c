#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that reverses a string
 * @s: Function parameter
 * Return: Always 0
 */

void rev_string(char *s)
{
	int e;
	int rev = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		rev++;
	}
	for (e = 0; e < rev / 2; e++)
	{
		char h;

		h = s[e];
		s[e] = s[rev - 1 - e];
		s[rev - 1 - e] = h;
	}
}
