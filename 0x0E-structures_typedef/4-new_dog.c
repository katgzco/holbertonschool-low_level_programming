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
	int indexn, indexo;

	mydog = malloc(sizeof(dog_t));
	if (!mydog)
		return (0);
	for (indexn = 0; *(name + indexn); indexn++)
		;
	for (indexo = 0; *(name + indexo); indexo++)
		;
	mydog->age = age;
	mydog->name = malloc(indexn + 1);
	if (!mydog->name)
	{
		free(mydog);
		return (0);
	}
	for (indexn = 0; *(name + indexn); indexn++)
		mydog->name[indexn] = *(name + indexn);
	mydog->name[indexn] = '\0';
	mydog->owner = malloc(indexo + 1);
	if (mydog->owner)
	{
		for (indexo = 0; *(owner + indexo); indexo++)
			mydog->owner[indexo] = *(owner + indexo);
		mydog->owner[indexo] = '\0';
	}
	else
	{
		free(mydog->name);
		free(mydog);
		return (0);
	}
	return (mydog);
}
