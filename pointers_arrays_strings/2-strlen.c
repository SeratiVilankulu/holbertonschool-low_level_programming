#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string
 * @s: Function parameter
 * Return: Always 0
 */

int _strlen(char *s)
{
	int  r;
	int num = 0;

	for (r = 0; s[r] != '\0'; r++)
		num++;
	return (num);

}
