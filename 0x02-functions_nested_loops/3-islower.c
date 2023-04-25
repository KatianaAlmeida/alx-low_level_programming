#include "main.h"

/**
 * int _islower - islower function
 *
 */

int _islower(int c)
{
	char character = c;

	if (character >= 97 && character <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
