#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int multiplication;
	
	multiplication = atoi(argv[1])  * atoi(argv[2]);
	printf("%d\n", multiplication);
	
	return (0);
}
