#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* string_nconcat - cocatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

result = (char *) malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && j < s2_len; j++)
	{
		result[i++] = s2[j];
	}
	result[i] = '\0';

	return (result);
}
