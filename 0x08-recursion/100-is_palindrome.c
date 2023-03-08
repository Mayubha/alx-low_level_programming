#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - returns length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - checks string if palindrome
 * @s: string to be checked
 * @len: the length of s
 * @index: index of the string to be checked
 *
 * Return: if the string is a palindrome - 1
 * if the string is not palindrome - 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks palindrome
 * @s: string to check
 *
 * Return: if string is palindrome - 1
 * if not - 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

