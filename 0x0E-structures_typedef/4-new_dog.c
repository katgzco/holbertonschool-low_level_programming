#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  function that creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 * Return: Null or pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	int indexn, indexo, indexcn, indexco;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (0);
	for (indexn = 0; name[indexn]; indexn++)
		;
	for (indexo = 0; name[indexo]; indexo++)
		;
	mydog->age = age;
	mydog->name = malloc(indexn + 1);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (0);
	}
	for (indexcn = 0; indexcn < indexn; indexcn++)
		mydog->name[indexcn] = name[indexcn];
	mydog->name[indexcn] = '\0';
	mydog->owner = malloc(indexo + 1);
	if (mydog->owner)
	{
		for (indexco = 0; indexco < indexo; indexco++)
			mydog->owner[indexco] = owner[indexco];
		mydog->owner[indexco] = '\0';
	}
	else
	{
		free(mydog->name);
		free(mydog);
		return (0);
	}
	return (mydog);
}
