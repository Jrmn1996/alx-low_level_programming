#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
