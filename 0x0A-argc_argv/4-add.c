#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main -  adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum, index;

        if (argc > 1)
        {
            for(index = 0; index < argc; index++)
            {
                if (isdigit(argv[index]))
                {
                    sum += atoi (argv[index]);
                }
                else
                {
                    printf("Error\n");
                    return (1);
                }
            }
            printf ("%d\n",  sum);
        }
        else
        {
            printf("0\n");
	}
        return (0);
}
