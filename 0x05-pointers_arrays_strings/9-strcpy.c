#include"main.h"
#include <stdio.h>

/**
 * _strcpy - check the code for ALX School students.
 * @dest: pointer char type
 * @src: pointer char type
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i++] = *src;

	return (dest);
}
