#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - simple pointererations.
 * @argc: the number of arguments given to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
 
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1;
	int number2;
	char *pointer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	pointer = argv[2];

	if (get_pointer_func(pointer) == NULL || pointer[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*pointer == '/' && number2 == 0) || (*pointer == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_pointer_func(pointer)(number1, number2));

	return (0);
}
