#include "main.h"

/**
 * swap_int - (&a, &b)
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tempnum;

	tempnum = *a;
	*a = *b;
	*b = tempnum;
}
