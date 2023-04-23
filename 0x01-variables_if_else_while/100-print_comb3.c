#include <stdio.h>

/**
 * main - Inventing is a combination of brains and materials
 * The more brains you use, the less material you need
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int number1;
	int number2;

	for (number1 = 48; number1 <= 56; number1++)
	{
		for (number2 = 49; number2 <= 57; number2++)
		{
			if (number2 > number1)
			{
				putchar(number1);
				putchar(number2);
				if (number1 != 56 || number2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
