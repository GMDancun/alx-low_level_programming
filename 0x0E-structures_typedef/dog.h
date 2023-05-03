#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a new type struct dog with the following elements:
 * @name: the Dog's name
 * @age: Age of the dog.
 * @owner: owner dogs name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
