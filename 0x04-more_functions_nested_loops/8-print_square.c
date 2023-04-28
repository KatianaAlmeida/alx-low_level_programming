#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} 
	else
	{
		int i, square;

		for (i = 0; i < size; i++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
