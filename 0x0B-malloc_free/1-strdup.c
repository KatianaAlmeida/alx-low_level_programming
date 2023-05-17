#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *pointer;
	int index2;
	int index1;

	if (str == NULL)
		return (NULL);

	for (index1 = 0; str[index1] != '\0';)
		index1++;

	pointer = malloc(sizeof(char) * (index1 + 1));

	if (pointer == NULL)
		return (NULL);

	for (index2 = 0; str[index2]; index2++)
		pointer[index2] = str[index2];

	return (pointer);
}
