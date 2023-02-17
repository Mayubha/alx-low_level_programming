#incude <stdio.h>
/**
 * main - starting point
 * return: (0) success
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long longType;
	long long longlongType;

	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
