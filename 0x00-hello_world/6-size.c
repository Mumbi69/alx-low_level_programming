#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: returns sizes
 */
int main(void)
{
	int i;
	char c;
	float f;

	printf("Size of a char: %lu.byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu.byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.byte(s)\n", (signed long)sizeof(long i));
	printf("Size of a long long int: %lu.byte(s)\n", (signed long)sizeof(long long i));
	printf("Size of a float: %lu.byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
