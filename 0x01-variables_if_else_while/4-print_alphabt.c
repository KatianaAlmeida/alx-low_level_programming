#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - When I was having that alphabet soup, 
 * I never thought that it would pay off
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int index;

	for (index = 97; index < 123; index++)
	{
		if (index != 101 && index != 113)
		{
			putchar(index);
		}
	}
	putchar('\n');
	return (0);
}
