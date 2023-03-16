#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: returns sizes
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (signed long)sizeof(i));
	printf("Size of a long long int: %lu.\n", (signed long)sizeof(i));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
