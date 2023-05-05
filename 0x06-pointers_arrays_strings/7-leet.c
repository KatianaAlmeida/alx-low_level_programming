#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n
 */

char *leet(char *n)
{
	int index1, index2;
	char arrayOfLetter[] = "aAeEoOtTlL";
	char arrayOfNumbers[] = "4433007711";

	for (index1 = 0; n[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 10; index2++)
		{
			if (n[index1] == arrayOfLetter[index2])
			{
				n[index1] = arrayOfNumbers[index2];
			}
		}
	}
	return (n);
}
