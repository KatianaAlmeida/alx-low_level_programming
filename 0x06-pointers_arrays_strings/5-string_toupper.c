#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int index;
	
	for (index = 0; n[index] != '\0'; index++)
	{
		if (n[index] >= 'a' && n[index] <= 'z')
			n[index] = n[index] - 32;
	}
	return (n);
}
