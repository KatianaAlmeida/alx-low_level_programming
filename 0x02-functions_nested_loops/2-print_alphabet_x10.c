#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - 10x alphabet
 *
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter != 10)
	{
		print_alphabet();
		counter++;
	}
}
