#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' || number != '4')
			_putchar(number);
	}
	_putchar('\n');
}


