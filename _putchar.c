#include <unistd.h>
/**
 * _putchar - prints a single char
 * @c: character param
 */

int _putchar(char c)
{
	return (write(1, &c,, 1));
}
