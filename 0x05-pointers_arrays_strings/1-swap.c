#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: variable that holds the integer to swap
 * @b: variable that holds integer to swap
 */
void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}

