#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dogs
 * @d: dog
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
		{
			free ((*d).name);
		}
		if ((*d).owner)
		{
			free ((*d).name);
		}
		free (d);
	}
}
