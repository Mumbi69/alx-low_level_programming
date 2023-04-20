#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* printf_char - printfs a char from var args
* @list: va_list to print from
*
* Return: 0
*/

void print_all(const char * const format, ...) {
    const char *p = format;
    va_list argp;
    char c;
    int i;
    float f;
    char *s;
    va_start(argp, format);

    while (*p) {
        if (*p == 'c') {
            c = va_arg(argp, int);
            printf("%c", c);
	    printf(", ");
        } else if (*p == 'i') {
            i = va_arg(argp, int);
            printf("%d", i);
	    printf(", ");
        } else if (*p == 'f') {
            f = va_arg(argp, double);
            printf("%f", f);
        } else if (*p == 's') {
            s = va_arg(argp, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }
        ++p;
    }
    printf("\n");

    va_end(argp);
}
