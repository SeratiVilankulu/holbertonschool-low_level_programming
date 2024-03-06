#include <stuio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int y = 0;
	char x = 'a';

		while
			(y < 16) {
				putchar(y + '0');
				y++;
			}
		while
			(x <= 'z') {
				putchar(x);
				x++;
			}
		putchar('\n');
		return (0);
}
