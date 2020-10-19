#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog- function that initialize a variable of type struct dog.
 * @d: a pointer to the structure.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	exit(0);

	if (d->name == NULL)
		d->name = "(nil)";
	if (d-> age < 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
