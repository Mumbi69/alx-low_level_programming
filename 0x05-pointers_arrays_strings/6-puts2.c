#include "main.h"
#include "2-strlen.c"

/**
* puts2 - prints every other character of a string, starting
* with the first character
* @str: character of the string
*
* Return: always return 0
*/

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
