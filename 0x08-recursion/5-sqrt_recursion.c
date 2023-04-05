#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a no.
* @n: parameter
*
* Return: -1 if n doesn't have a natural squareroot
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n / 2) * 2 + 1 <= n ? _sqrt_recursion(n / 2) + 1 : _sqrt_recursion(n / 2));
	}




}
