#include <stdio.h>
/**
 * main - starting point
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(charType));
	printf("size of an int: %d byte(s)\n", sizeof(intType));
	printf("size of a long int: %d byte(s)\n", sizeof(longType));
	printf("size of a long long int: %d byte(s)\n", sizeof(longlongType));
	printf("size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
