#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int times, numbers;

	for (times = 1; times <= 10; times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
				_putchar('1');
			_putchar (numbers % 10 + '0');
		}
		_putchar('\n');
	}
}
