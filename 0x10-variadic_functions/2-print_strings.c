#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - prints string arguments with a separator
* @separator: ...
* @n: number of arguments
*
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s, *ptr;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", s, ptr);
	}
	printf("\n");
	va_end(list);
}
