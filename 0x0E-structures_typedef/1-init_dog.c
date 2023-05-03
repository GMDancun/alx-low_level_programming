#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a function that initialize a variable of typr struct dog
 * @name: the name of the dog
 * @age: Age of the dog
 * @owner: the Dog's owner
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
