#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 *
 * @name: the name of the dog.
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if the functions fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int ln;
	char *pr;

	if (name == 0 || owner == 0)
		return (NULL);
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	for (ln = 1, pr = name; *pr; ln++)
		pr++;
	dg->name = malloc(ln);
	if (dg->name == 0)
	{
		free(dg);
		return (NULL);
	}

	for (ln = 1, pr = owner; *pr; ln++)
		ptr++;
	dg->owner = malloc(ln);
	if (dg->owner == 0)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}

	for (ln = 0; *name != 0; lgn++, name++)
		dg->name[ln] = *name;
	dg->name[ln] = 0;
	for (ln = 0; *owner != 0; ln++)
		d->owner[ln] = *owner++;
	dg->owner[ln] = 0;
	dg->age = age;

	return (dg);
}
