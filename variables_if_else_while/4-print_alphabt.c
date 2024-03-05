#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char v;
v = 'a';
while (v <= 'z')
{
if ((v != 'q' || v != 'e')
|| v <= 'z');
v++;
putchar(v);
v++;
}
putchar('\n');
return (0);
}
