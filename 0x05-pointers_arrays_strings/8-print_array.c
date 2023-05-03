#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index <= n; index++)
	{
		printf("%d, ", a[index]);
	}
	printf("\n");
}
