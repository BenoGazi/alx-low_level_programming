#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array element
 * @size: size of array
 * Return: Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memarr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memarr = malloc(nmemb * size);
	if (memarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		memarr[i] = 0;
	}
	return (memarr);
}
