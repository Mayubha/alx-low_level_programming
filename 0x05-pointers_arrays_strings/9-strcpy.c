#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src,including,
 * terminating numm byte to a buffer pointed to @dest.
 * @dest: a buffe to copy the string to.
 * @src: the source string to copy.
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
