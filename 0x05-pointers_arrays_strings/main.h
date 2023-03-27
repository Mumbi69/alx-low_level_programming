#ifndef Mumbi_header
#define Mumbi_header

int _putchar(char c);

/**
* _ putchar - writes the character c to stdout
* @c: The character to print
*
*/

void reset_to_98(int *n);

/**
* _reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98.
* Return: always return 0
*
*/

void swap_int(int *a, int *b);

/**
* _swap -  swaps the values of two integers.
* Return: always return 0
*
*/

int _strlen(char *s);

/**
* _strlen -  returns the length of a string.
* Return: always return 0
*
*/

void _puts(char *str);
/**
* _puts - prints a string, followed by a new line, to stdout.
* Return: always return 0
*
*/

 void print_rev(char *s);
/**
* _print_rev - prints a string, in reverse, followed by a new line.
* Return: always return 0
*
*/

void rev_string(char *s);
/**
* _rev_string - reverses a string.
* Return: always return 0
*
*/

void puts2(char *str);
/**
* _puts2 -  prints every other character of a string, starting with the first character, followed by a new line.
* Return: always return 0
*
*/

void puts_half(char *str);
/**
* _puts_half - prints half of a string, followed by a new line.
* Return: always return 0
*
*/

void print_array(int *a, int n);
/**
* _print_array - prints n elements of an array of integers, followed by a new line.
* Return: always return 0
*
*/

char *_strcpy(char *dest, char *src);
/**
* _strcpy - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* Return: always return 0
*
*/

int _atoi(char *s);
/**
* _atoi - convert a string to an integer.
* Return: always return 0
*
*/
#endif
