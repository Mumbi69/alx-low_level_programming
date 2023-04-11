#include <stdlib.h>
#include <string.h>

/**
* _concat - concatenates two strings
* @s1: string 1
* @s2: string 2
*
* Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
