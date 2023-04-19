#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, exit with status 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
    int a, b, res;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("
