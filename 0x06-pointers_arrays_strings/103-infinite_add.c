#include "main.h"
#include <string.h>

/**
* infinite_add - adds two numbers
* @n1: ...
* @n2: ...
* @r: ...
* @size_r: ...
*
* Return: 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum = 0;
	int i = len1 - 1, j = len2 - 1, k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (k >= size_r)
			return (0);
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (k >= size_r)
		return (0);
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;

	}
	return (r);
}
