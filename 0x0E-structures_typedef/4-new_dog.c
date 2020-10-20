#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog -  function that creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 * Return: Null or pointer.
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, i2, i3, i4;

	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
		return (NULL);
	for (i4 = 0; name[i4]; i4++)
		;
	for (i3 = 0; owner[i3]; i3++)
		;
	my_dog->age = age;
	my_dog->name = malloc((i4 + 1) * sizeof(char));
	if (my_dog->name)
	{
		for (i = 0; i < i4; i++)
			my_dog->name[i] = name[i];
		my_dog->name[i] = '\0';
	}
	else
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc((i3 + 1) * sizeof(char));
	if (my_dog->owner)
	{
		for (i2 = 0; i2 < i3; i2++)
			my_dog->owner[i2] = owner[i2];
		my_dog->owner[i2] = '\0';
	}
	else
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
