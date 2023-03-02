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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
