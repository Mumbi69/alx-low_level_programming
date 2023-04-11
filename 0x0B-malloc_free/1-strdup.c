#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space
* @str: string
*
*
*
* Return: 0
*/

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

new_str = (char *)malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
