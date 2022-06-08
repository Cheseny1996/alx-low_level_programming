#include"main.h"
/**
 * print_alphabet_X10 -> prints the lower case alphabets,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int j;
	int K;

	for (K = 0; K < 10; K++)
	{
		for (j = 'a' ; j <= 'z'; j++)
		{
			_putchar(j);
		}

	_putchar('\n');
		}
}

