#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int modules;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	modules = n % 10;

	if (modules > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, modules);
	}
	else if (modules == 0)
	{
		printf("Last digit of %d is %d and is 0", n, modules);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, modules);
	}
	return (0);
}
