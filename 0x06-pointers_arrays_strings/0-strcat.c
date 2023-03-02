#include "main.h"
#include <stdio.h>

/**
 * strcat - displays content of string @src
 * terminate null byte at the end of string by @dest
 * @dest:  pointer to the string
 * @src: source string
 *
 * Return: apointer to destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
