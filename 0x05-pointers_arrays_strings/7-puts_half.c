#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int index, half;
	int length_of_the_string = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		length_of_the_string++;
	}
	half = (length_of_the_string / 2);

	if ((length_of_the_string % 2) == 1)
		half = ((length_of_the_string + 1) / 2);

	for (index = half; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
