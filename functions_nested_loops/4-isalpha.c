#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character c and 0 for anything else
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 60)
		return (1);
	else
		return (0);
}
