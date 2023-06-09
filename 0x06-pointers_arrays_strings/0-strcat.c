#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest - hold the input value
 * @src - holds the input value
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}

	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}

	dest[index1] = '\0';
	return (dest);
}
