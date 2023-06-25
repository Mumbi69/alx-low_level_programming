#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, exit with status 98, 99, or 100 on failure
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}


