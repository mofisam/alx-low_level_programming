#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infomation about the dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the ower of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
my_dog *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(my_dog *d);
#endif
