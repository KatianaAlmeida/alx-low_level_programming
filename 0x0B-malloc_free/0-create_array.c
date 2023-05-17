#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: value to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	pointer = malloc(sizeof(char) * size);
	if (size == 0 || pointer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pointer[i] = c;

	return (pointer);
}
