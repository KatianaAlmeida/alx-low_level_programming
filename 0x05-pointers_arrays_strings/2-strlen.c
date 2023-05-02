#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: holds the string value
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}

	return (length);
}
