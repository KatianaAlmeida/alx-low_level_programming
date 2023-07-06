#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: number to be determined the square
 * Return: natural square
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n,1));
}

/**
 * sqrt_recursion - square of a number
 * @n: the number
 * @m: numbers to multiply
 * Return: square
 */

int sqrt_recursion(int n, int m)
{
	if (n < 0)
		return (-1);
	else if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	return (sqrt_recursion(n, m + 1));
}
