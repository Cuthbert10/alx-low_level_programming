#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);
    new_dog->age = age;
    return new_dog;
}

int main() {
    dog_t *my_dog = new_dog("Fido", 3.5, "John");
    if (my_dog == NULL) {
        printf("Failed to create dog\n");
        return 1;
    }
    printf("Created dog named %s, aged %.1f, owned by %s\n", my_dog->name, my_dog->age, my_dog->owner);
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);
    return 0;
}

