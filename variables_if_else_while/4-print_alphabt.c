#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char v = 'a';
		while (v <= 'z')
		{
			if (v == 'q' || v == 'e')
			v++;
			putchar(v);
			v++;
		}
	putchar('\n');
	return (0);
}
