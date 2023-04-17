#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints all member info of a struct dog
 * @d: a variable of type struct dog
 */


struct dog {
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d) {
    if (d == NULL) {
        return;
    }
    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.1f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

int main() {
    struct dog my_dog = { "Fido", 3.5, "John" };
    struct dog *p_dog = NULL;

    printf("Printing my dog:\n");
    print_dog(&my_dog);

    printf("Printing a null dog:\n");
    print_dog(p_dog);

    return 0;
}
