#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Description: dog ID
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
