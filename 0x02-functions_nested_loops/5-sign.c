#include "main.h"

/**
 * print_sign - this function prints the sign of a number.
 * @c: the character to be checked
 * Return: 1_ and prints + if n is greater than zero
 * 0_ and prints 0_ if n is zero
 * -1_ and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
                return (0);
	}
	else
	{
		_putchar('-');
                return (-1);
	}
}
