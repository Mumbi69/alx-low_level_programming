#include <stdio.h>

/**
* get_endianness - checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[sizeof(unsigned int)];
	}endian;

	endian.i = 1;

	return (int)endian.c[0];
}
