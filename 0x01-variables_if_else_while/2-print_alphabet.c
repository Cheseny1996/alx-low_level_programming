#include <stdio.h>

/**
 * main -> print the alphabet in lower case,
 * followed by a new line
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n'); /* this is an ascii code for new line*/
	return (0);
}
