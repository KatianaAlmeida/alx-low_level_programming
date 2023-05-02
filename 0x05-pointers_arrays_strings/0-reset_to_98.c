#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @c: The character to print
 *
 * Return: On success 1.
 */

void reset_to_98(int *n)
{
	int *point = &n;

	*point = 98;
}
