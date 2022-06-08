#include <stdout.h>

/**
 * _putchar -writes the charecter C to stdout
 * @C: The charecter to print
 *
 *Return :On Success 1 .
 *On error , -1 is returned and errno is set appropriately.
 */
int _putchar(Char c)
{
	return (Write(1, &c, 1));
}
