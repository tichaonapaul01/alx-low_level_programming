#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff_two = n ^ m;
unsigned int count = 0;

	while (diff_two)
{
		count += diff_two & 1;
		diff_two >>= 1;
}
	return (count);
}

