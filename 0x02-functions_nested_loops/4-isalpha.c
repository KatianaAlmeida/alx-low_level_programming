#include "main.h"

/**
 * _isalpha - check if char is alphabetic character
 * @c: is the char to be checked
 * Return: 1_if c is a letter, lowercase or uppercase or 0_otherwise
 */

int _isalpha(int c)
{
	char character = c;
	
	if (character >= 97 && character <= 122)
	{
	       	return (1);
	
	}
	else if (character >= 65 && character <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
