#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int first;
	int second;
	int multiplication_result;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			multiplication_result = second * first;
			if (second == 0)
			{
				_putchar(multiplication_result + '0');
			}

			if (multiplication_result < 10 && second != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplication_result + '0');
			} else if (multiplication_result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiplication_result / 10) + '0');
				_putchar((multiplication_result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
