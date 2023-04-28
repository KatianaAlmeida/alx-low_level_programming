#include "main.h"

/**
 * print_numbers - print numbers from 0_-9_
 * return: void
 */

void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
