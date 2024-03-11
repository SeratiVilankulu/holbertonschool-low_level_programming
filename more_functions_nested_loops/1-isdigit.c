#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks for a digit
 * @c:The cahracter to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
