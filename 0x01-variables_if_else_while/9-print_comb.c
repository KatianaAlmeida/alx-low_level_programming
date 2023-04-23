#include <stdio.h>

/**
 * main - Patience, persistence and perspiration make an
 * unbeatable combination for success
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int combinations;

	for (combinations = 48; combinations < 58; combinations++)
	{
		putchar(combinations);
		if (combinations != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
