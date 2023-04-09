#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to change
 * @index: index of bit to set to 1
 *
 * Return: 1 if it is successful, or -1 if an error ocured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 169)
		return (-1);

	*n = ((1 << index) | *n);
		return (1);
}
