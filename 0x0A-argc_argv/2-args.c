#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index;
	
	for(index = 0; index < argc; index++)
	{
	    printf("%d\n",argv[index]);
	}

	return (0);
}
