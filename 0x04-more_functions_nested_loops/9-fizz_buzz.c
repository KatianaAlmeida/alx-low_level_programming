#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz. For numbers which
 * are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0 && numbers % 5 != 0)
		{
			printf(" Fizz");
		} else if (numbers % 5 == 0 && numbers % 3 != 0)
		{
			printf(" Buzz");
		} else if (numbers % 3 == 0 && numbers % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (numbers == 1)
		{
			printf("%d", numbers);
		} else
		{
			printf(" %d", numbers);
		}
	}
	printf("\n");

	return (0);
}
