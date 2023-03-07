#include "main.h"
#include <unistd.h>

/** _putchar - writes c stdout.
 * @c: character to print
 *
 * Return: 1 on success.
 * on error, return -1, and errno.
 */

int _putchar(char c)
{
	return (write(i, &c, 1));
}
