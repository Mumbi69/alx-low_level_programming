#ifndef Mumbi_header
#define Mumbi_header

int _putchar(char s);

/**
* _putchar - writes the character m to stdout
* @s: The character to print
*
*/

int _isupper(int c);

/**
* _isupper - checks for uppercase character
* @c: The character to print
* Return: returns 1 if c is uppercase and 0 if otherwise
*/

int _isdigit(int c);
/**
* _isdigit - checks for a digit
* @c: The charater to print
* Return: returns 1 if c is a digit and 0 if otherwise
*/

int mul(int a, int b);
/**
* _mul - checks for multiple two integers.
* @a: The first integer to print
* @b: The second integer to print
* Return: returns 0
*/

void print_numbers(void);
/**
* _print_numbers - prints numbers from 0 to 9
*
*/

void print_most_numbers(void);
/**
* _print_most_numbers - prints numbers from 0 to 9
*
*/

void more_numbers(void);
/**
* _more_numbers - prints 10 times the numbers from 0-14
*
* Return: always 0
*/

void print_line(int n);
/**
* _print_line - draws a straight line in the terminal
*
*/

void print_diagonal(int n);
/**
* _print_diagonal - draws a diagnol line on the terminal
*
*/

void print_square(int size);
/**
* _print_square - prints a square
*
*/

void print_triangle(int size);

void print_number(int n);
#endif
