#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: variable string to append to
 * @s2: variable string to concatenate from
 * @n:  bytes from s2 to concatenate to s1
 * 
 * Return: pointer
 * */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer_to_the_string;
	unsigned int index1 = 0, index2 = 0;
	unsigned int lenght1 = 0, lenght2 = 0;
	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;
	if (n < lenght2)
		pointer_to_the_string = malloc(sizeof(char) * (lenght1 + n + 1));
	else
		pointer_to_the_string = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (!pointer_to_the_string)
		return (NULL);
	for (; index1 < lenght1; index1++)
	{
		pointer_to_the_string[index1] = s1[index1];
	}
	while (n < lenght2 && index1 < (lenght1 + n))
		pointer_to_the_string[index1++] = s2[index2++];
	while (n >= lenght2 && index1 < (lenght1 + lenght2))
		pointer_to_the_string[index1++] = s2[index2++];
	pointer_to_the_string[index1] = '\0';
	return (pointer_to_the_string);
}

