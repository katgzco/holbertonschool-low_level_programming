#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog- function that initialize a variable of type struct dog.
 * @d: a pointer to the structure.
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age : %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
