#include "main.h"

/**
* _isupper - start of a program
* @c: the character to be printed
* Return: returns 1 if c is uppercase otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
