#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function that checks for uppercase character
 *@c: The character to be checked
 * Return: 0 (Sucess)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
