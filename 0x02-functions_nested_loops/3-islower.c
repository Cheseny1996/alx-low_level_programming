#include "main.h"
/**
 * _islower ->checks if the lower charecter is lowercase
 * @c: a charecter argument
 * Return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
