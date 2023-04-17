#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: member
 * @age: member
 * @owner: member
 */

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

int main() {
    struct dog my_dog;
    init_dog(&my_dog, "Fido", 3.5, "John");
    printf("My dog's name is %s, he is %.1f years old, and his owner is %s\n",
           my_dog.name, my_dog.age, my_dog.owner);
    return 0;
}
