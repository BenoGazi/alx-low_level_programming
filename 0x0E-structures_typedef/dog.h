#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE
/**
 * struct dog - dog struct data type
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
