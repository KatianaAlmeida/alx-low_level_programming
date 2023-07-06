#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * return: nothing
 * */

void _print_rev_recursion(char *s)
{
	int count;
	
	for(count = 0; s[count] != '\0';)
	{
		count++;
	}
	
	for(int index =  count-1; s[index] != '\0'; index--)
	{
		printf("%c", s[index]);
	}
}
