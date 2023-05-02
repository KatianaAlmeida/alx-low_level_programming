#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length;
	int t = 0;
	int index;

	for (length = 0; *str != '\0'; length++)
	{
		str++;
	}

	t = length - 1;

	for (index = 0 ; index <= t ; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
