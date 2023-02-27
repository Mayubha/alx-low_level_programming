#include "main.h"
#include <unistd.h>

/**
 * putchar - puts a charavter in the prototype programs.
 * Return: on success 1
 * On error - -1 is returned, and eerno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
