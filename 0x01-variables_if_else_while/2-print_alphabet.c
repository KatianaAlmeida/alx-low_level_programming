#include <stdio.h>

/**
 * main - I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
        int  index;
 
	for (index =0; index < 26; index++)
	{
		putchar(alphabet[index]);
	}
	putchar('\n');
	return (0);
}
