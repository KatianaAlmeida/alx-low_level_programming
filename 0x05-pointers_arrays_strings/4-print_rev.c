#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: variable that holds the string
 * return: 0
 */
void print_rev(char *s)
{
	int length;
	int reverse;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}

	s--;
	for (reverse = length; reverse > 0; reverse--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

