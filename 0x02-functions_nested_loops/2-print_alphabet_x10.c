#include <stdio.h>
#include"main.h"
/**
 * print_alphabet_X10 -> prints the lower case alphabets,
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}

