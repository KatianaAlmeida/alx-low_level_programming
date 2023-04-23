#include <stdio.h>

/**
 * main - Smile in the mirror
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
