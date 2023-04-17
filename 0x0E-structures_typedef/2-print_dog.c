#include "main.h"
#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d) {
    if (!d) return;
    printf("Name: %s\nAge: %.6f\nOwner: %s\n",
           d->name ? d->name : "(nil)",
           d->age, d->owner ? d->owner : "(nil)");
}

int main() {
    struct dog my_dog = {"Fido", 3.5, "John"};
    print_dog(&my_dog);
    return 0;
}
