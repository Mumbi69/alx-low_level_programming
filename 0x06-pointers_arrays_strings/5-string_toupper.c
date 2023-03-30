#include "main.h"
#include <ctype.h>
/**
* string_toupper - changes all lowercase letters to upper
* @c: string pointer
*
* Return: nothing
*/

char *string_toupper(char *c)
{
	char *p = c;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}

	return (c);
}
