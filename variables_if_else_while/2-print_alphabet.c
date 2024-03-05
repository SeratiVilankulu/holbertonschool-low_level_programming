#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char s;
s = 'a';
while (s <= 'z')
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
