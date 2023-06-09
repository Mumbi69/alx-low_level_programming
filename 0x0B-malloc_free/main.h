#ifndef Mumbi_header
#define Mumbi_header

int _putchar(char c);

/**
* _ putchar - writes the character c to stdout
* @c: The character to print
*
*/

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

#endif
