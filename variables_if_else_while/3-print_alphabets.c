#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase 
 * Return: 0 (Success)
 */

int  main(void)
{
	char g = 'a';
	char m = 'A';
	while(g <= 'z')
	{
		putchar(g);
	       g++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	 }	

	putchar('\n');
	return (0);
}
