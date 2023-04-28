#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int counter, triangle;

		for (counter = 1; counter <= size; counter++)
		{
			for (triangle = counter; triangle < size; triangle++)
			{
				_putchar(' ');
			}

			for (triangle = 1; triangle <= counter; triangle++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
