#include "main.h"

/**
 * _memset - fills @n bytes in the memory area @s with constant byte @c.
 * @s: pointer to memory area to be filled.
 * @c: the character used
 * @n: number of bytes fo fill
 *
 * Return: a pointer to @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
