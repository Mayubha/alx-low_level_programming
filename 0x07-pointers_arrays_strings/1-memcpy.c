#include "main.h"

/**
 * _memcpy - copies @n bytes to pointed by @src into pointed to @dest.
 * @dest: pointer to memory area
 * @src: source buffer
 * @n: number of bytes
 *
 * Return: pointer to destination @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
