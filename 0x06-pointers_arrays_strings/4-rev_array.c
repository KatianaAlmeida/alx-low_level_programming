#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index;
	int swap;

	for (index = 0; index < n--; index++)
	{
		swap = a[index];
		a[index] = a[n];
		a[n] = swap;
	}
}
