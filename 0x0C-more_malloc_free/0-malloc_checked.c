#include <stdlib.h>
#include "main.h"

/**
 *  * *malloc_checked - this function allocates memory using malloc
 *   * @b: bytes to allocate
 *    *
 *     * Return: a pointer
 *      */

void *malloc_checked(unsigned int b)
{
		void *pointer_to_the_memory;

			pointer_to_the_memory = malloc(b);

				if (pointer_to_the_memory == NULL)
							exit(98);

					return (pointer_to_the_memory);
}
