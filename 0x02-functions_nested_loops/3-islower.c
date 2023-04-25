#include "main.h"

/**
 * _islower - check if character is lower
 * @c: is the is the variable that hold the character/value
 * Return: 1_if c is lowercase or 0_otherwise
 */

int _islower(int c)
{
	char character = c;

	if (character >= 97 && character <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
