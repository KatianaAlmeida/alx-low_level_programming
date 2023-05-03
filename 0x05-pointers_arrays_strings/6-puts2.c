#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
        int length;
        int index;
	char *y = str;

        while (*y != '\0')
        {
                y++;
                length++;
        }

        for (index = 0 ; index < length; index++)
        {
                if (index % 2 == 0)
                {
                        _putchar(str[index]);
                }
        }
        _putchar('\n');
}
