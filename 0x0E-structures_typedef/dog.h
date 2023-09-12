#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infomation about the dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the ower of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
