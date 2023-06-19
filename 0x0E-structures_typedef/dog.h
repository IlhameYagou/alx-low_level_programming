#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - poppy's structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: Poppy's Structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
