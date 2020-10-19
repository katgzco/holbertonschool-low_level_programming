#ifndef DOG_H
#define DOG_H
/**
 * struct dog- a struct of the  basical information of a dog
 * @name:The name of the dog
 * @age: The age of the dog
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H*/
