#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic information
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the typedef for sturct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age,
		char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner)
	void free_dog(dog_t *d);
	char *strcpy(char *dest, char *src);
	int _strlen(char *s);

#endif
