#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_cpystr(char *string);
int cal_length(char *string);

/**
 * new_dog -  create a new dog
 * @name: first param
 * @age: second param
 * @owner: third param
 * Return: dog_ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
	{
		return (NULL);
	}
	dog_ptr->name = _cpystr(name);
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->age = age;
	dog_ptr->owner = _cpystr(owner);
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	return (dog_ptr);
}

/**
 * cal_length - calculate length of string
 * @string: param to check
 * Return: len
 */
int cal_length(char *string)
{
	int len = 0;

	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _cpystr - copies string
 * @string: param string to copy
 * Return: cpy
 */

char *_cpystr(char *string)
{
	int len = cal_length(string);
	char *cpy;
	int i;

	cpy = malloc(len + 1);
	if (cpy != NULL)
	{
		for (i = 0; i < len; i++)
		{
			cpy[i] = string[i];
		}
		cpy[len] = '\0';
	}
	return (cpy);
}
