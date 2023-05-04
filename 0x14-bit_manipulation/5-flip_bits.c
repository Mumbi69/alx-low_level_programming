#include <stdio.h>
#include "main.h"

/**
* flip_bits - returns the number of bits
* @n: first number
* @m: second number
* Return: the number of bits required to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int nf = 0;

	while (xor_result > 0)
	{
		nf += xor_result & 1;
		xor_result >>= 1;
	}

	return (nf);
}
