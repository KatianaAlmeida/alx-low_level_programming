#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter;
	int index;

	for (counter = 0; s[counter] != '\0';)
	{
		counter++;
	}
	
	for (index = 0; index < counter; index++)
	{
		counter--;
		reverse = s[index];
		s[index] = s[counter];
		s[counter] = reverse;
	}
}
