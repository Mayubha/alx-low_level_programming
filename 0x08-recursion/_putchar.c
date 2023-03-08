#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout.
 * @c: character to print.
 *
 * Return: on success 1.
 * on error, -1 returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
