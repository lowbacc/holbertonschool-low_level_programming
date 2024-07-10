#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: The owner of the dog
 * Return: Always 0.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
