#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/**
 * struct list_int- singly linked list
 * @num: integer
 * @idx: Index of the node
 * @next: next node pointer
 *
 * Description: Singly linked list node structure
 */

typedef struct list_int
{
	int num;
	size_t idx;
	struct listint_s *next;
} list_int_s;

/**
 * struct skip_list - Singly linked express lane list
 * @num: Integer
 * @idx: Pointer to next node
 * @next: Next node pointer
 * @express: Pointer to the next node in the express lane
 *
 * Description: Singly linked list node structure with an express lane
 */

typedef struct skip_list
{
	int num;
	size_t idx;
	struct skip_list *next;
	struct skiplist_s *express;
} skip_list_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
