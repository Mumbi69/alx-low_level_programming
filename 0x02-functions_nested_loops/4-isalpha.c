#include "main.h"

/**
* _isalpha - checks for alphabetic character
*
* Return: On success returns 1, on error returns 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return 0;
	}



}
