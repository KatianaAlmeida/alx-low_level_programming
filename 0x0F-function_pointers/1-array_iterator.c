#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a 
 * parameter on each element of an array.
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
