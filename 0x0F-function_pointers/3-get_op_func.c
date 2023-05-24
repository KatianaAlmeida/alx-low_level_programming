#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the function to perform
 * the operation asked.
 * @s: The operator passed as argument.
 *
 * Return: a pointer to the function corresponding
 * to the operator given as a parameter.
 */
 
int (*get_op_func(char *s))(int, int)
{
	op_t array[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int index = 0;

	while (array[index].pointer != NULL && *(array[index].pointer) != *s)
		index++;

	return (array[index].f);
}
