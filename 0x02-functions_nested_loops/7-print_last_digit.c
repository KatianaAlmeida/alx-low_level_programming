#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_number;

	if (n < 0)
		n = -n;

	last_number = n % 10;

	if (last_number < 0)
		last_number = -last_number;

	_putchar(last_number; + '0');

	return (last_number);
}
