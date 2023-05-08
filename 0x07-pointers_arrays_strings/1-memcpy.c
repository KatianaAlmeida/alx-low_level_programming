#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: varibale where is stored
 *@src: varibale where is copied
 *@n: number of bytes
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
