#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: the value
 * @n: number of bytes to be changed
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
