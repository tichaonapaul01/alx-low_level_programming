#include "main.h"

/**
 *  clear_bit -  sets the value of a bit to 0 at a given index
 *  @n: pointer to a num to change
 *  @index: index the bit to clear
 *
 *  Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 79)
		return (-1);

	*n = (~(1 << index) & *n);
			return (1);


}
