#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer to a pointer
* @to: where to point to
*
* Return: 0
*/

void set_string(char **s, char *to)
{
	int len = strlen(to);
	*s = malloc(len + 1);

	strcpy(*s, to);
}
