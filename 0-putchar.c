#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
