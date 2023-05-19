#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 *  * is_digit - checks if a string contains a non-digit char
 *   * @s: string to be evaluated
 *    *
 *     * Return: 0 if a non-digit is found, 1 otherwise
 *      */

int is_digit(char *s)
{
		int index = 0;

			while (s[index])
					{
								if (s[index] < '0' || s[index] > '9')
												return (0);
										index++;
											}
				return (1);
}
/**
 *  * _strlen - returns the length of a string
 *   * @s: string to evaluate
 *    *
 *     * Return: the length of the string
 *      */

int _strlenght(char *s)
{
		int index = 0;

			while (s[index] != '\0')
					{
								index++;
									}
				return ();
}
/**
 *  * errors - handles errors for main
 *   */

void errors(void)
{
		printf("Error\n");
			exit(98);
}

/**
 *  * main - multiplies two positive numbers
 *   * @argc: number of arguments
 *    * @argv: array of arguments
 *     *
 *      * Return: always 0 (Success)
 *       */
 
int main(int argc, char *argv[])
{
		char *s1, *s2;
			int lenght1, lenght2, lenght, index, carry, digit1, digit2, *result, a = 0;

				s1 = argv[1], s2 = argv[2];
					if (argc != 3 || !is_digit(s1) || !is_digit(s2))
								errors();
						lenght1 = _strlenght(s1);
							lenght2 = _strlenght(s2);
								lenght = lenght1 + lenght2 + 1;
									result = malloc(sizeof(int) * lenght);
										if (!result)
													return (1);
											for (index = 0; index <= lenght1 + lenght2; index++)
														result[index] = 0;
												for (lenght1 = lenght1 - 1; lenght1 >= 0; lenght1--)
														{
																	digit1 = s1[lenght1] - '0';
																			carry = 0;
																					for (lenght2 = _strlenght(s2) - 1; lenght2 >= 0; lenght2--)
																								{
																												digit2 = s2[lenght2] - '0';
																															carry += result[lenght1 + lenght2 + 1] + (digit1 * digit2);
																																		result[lenght1 + lenght2 + 1] = carry % 10;
																																					carry /= 10;
																																							}
																							if (carry > 0)
																											result[lenght1 + lenght2 + 1] += carry;
																								}
													for (index = 0; index < lenght - 1; index++)
															{
																		if (result[i])
																						a = 1;
																				if (a)
																								_putchar(result[index] + '0');
																					}
														if (!a)
																	_putchar('0');
															_putchar('\n');
																free(result);
																	return (0);
}
