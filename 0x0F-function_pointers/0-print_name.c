#include <stdio.h>
#include <string.h>

/**
* print_name -  prints a name.
* @name: ...
* @f: function pointer
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
* print_normal - prints normal
* @name: ...
* Return: nothing
*/

void print_normal(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
* print_reversed - prints reversed
* @name: ...
* Return: nothing
*/
void print_reversed(char *name)
{
	size_t i;

	printf("My name spelled backwards is ");
	for (i = strlen(name); i > 0; i--)
	{
		printf("%c", name[i - 1]);
	}
	printf("\n");
}

