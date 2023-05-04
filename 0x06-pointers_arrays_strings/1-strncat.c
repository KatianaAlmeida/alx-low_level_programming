#include "main.h"

/**
 * _strncat - concatenate two strings.
 * except that it will use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (index2 < n && src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}

	dest[index1] = '\0';
	return (dest);
}
