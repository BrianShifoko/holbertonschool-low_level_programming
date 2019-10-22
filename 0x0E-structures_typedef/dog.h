#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struture of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

int _putchar(char c);
#endif /* #ifndef DOG_H */