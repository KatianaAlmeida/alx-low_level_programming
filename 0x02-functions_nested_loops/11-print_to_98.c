#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98_,followed by a new line
 * @number: print from this number
 */
void print_to_98(int number)
{
	int x, y;

	if (number <= 98)
	{
		for (x = number; x <= 98; x++)
		{
			if (x <= 98)
				printf("%d, ", x);
			else if (x == 98)
				_putchar('\n');
		}
	} else if (number >= 98)
	{
		for (y = number; y >= 98; y--)
		{
			if (y >= 98)
				printf("%d, ", y);
			else if (y == 98)
				_putchar('\n');
		}
	}
}
