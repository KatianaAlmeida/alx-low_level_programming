#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: hold the input value
 * @src: holdes the input value
 * @n: holds the input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (; index < n && src[j] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
