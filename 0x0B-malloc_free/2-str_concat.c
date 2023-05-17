#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int index1 = 0;
	int index2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
		index2++;
		
	concatenate = malloc(sizeof(char) * (index1 + index2 + 1));

	if (concatenate == NULL)
		return (NULL);
		
	for (index1= 0; s1[index1] != '\0'; index1++)
	{
		concatenate[index1] = s1[index1];
	}

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		concatenate[index1] = s2[index2];
		index1++;
	}
	concatenate[index1] = '\0';
	return (concatenate);
}
