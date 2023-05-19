#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * 
 * Return: pointer
 * */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int index;
	unsigned int number_of_times_to_copy = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index < number_of_times_to_copy; index++)
	{
		pointer[index] = 0;
	}
	return (pointer);
}
