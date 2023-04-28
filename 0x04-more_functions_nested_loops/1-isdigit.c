#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @number: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int number)
{
	if (number >= '0' && number <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
