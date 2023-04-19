#include <stdio.h>
#include <string.h>

void print_name(char *name, void (*f)(char *)) {
  f(name);
}

void print_normal(char *name) {
  printf("Hello, my name is %s\n", name);
}

void print_reversed(char *name) {
	size_t i;

  printf("My name spelled backwards is ");
  for (i = strlen(name); i > 0; i--) {
    printf("%c", name[i-1]);
  }
  printf("\n");
}

