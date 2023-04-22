#include <stdio.h>

/**
 * main - alphABET
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char  alphabetInLowercase[26] = "abcdefghijklmnopqrstuvwxyz";
	char  alphabetInUppercase [26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int index1;
	int index2;

	for (index1 = 0; index1 < 26; index1++)
	{
		putchar(alphabetInLowercase[index1]);
	}
	for (index2 = 0; index2 < 26; index2++)
	{
		putchar(alphabetInUppercase[index2]);
	}
	putchar('\n');
	return (0);
}
