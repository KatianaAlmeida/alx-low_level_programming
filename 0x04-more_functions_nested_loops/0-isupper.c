#include "main.h"

/**
 * _isupper - uppercase letters
 * @letters: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int letters)
{
	if (letters >= 'A' && letters <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
