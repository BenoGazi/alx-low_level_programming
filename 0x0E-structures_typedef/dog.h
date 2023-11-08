#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE
/**
 * struct dog - dog struct data type
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

char *_cpystr(char *string);
int cal_length(char *string);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
