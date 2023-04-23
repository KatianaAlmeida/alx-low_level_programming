#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int baseSixteen;

	for (baseSixteen = 48; baseSixteen < 58; baseSixteen++)
	{
		putchar(baseSixteen);
	}
	for (baseSixteen = 97; baseSixteen < 103;  baseSixteen++)
	{
		putchar(baseSixteen);
	}
	putchar('\n');
	return (0);
}
