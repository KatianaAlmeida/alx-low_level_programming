#include "main.h"

/**
 * factorial -  calculates the factorial of a given number.
 * @s: string
 * Retrun: factorial of s
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
