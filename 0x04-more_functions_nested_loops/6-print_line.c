#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @times: number of times the character _ should be printed
 */
void print_line(int times)
{
	if (times <= 0)
	{
		_putchar('\n');
	} else
	{
		int counter;

		for (counter = 1; counter <= times; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

