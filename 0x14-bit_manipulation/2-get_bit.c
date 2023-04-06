#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index.
 * @n: the mumber
 * @index: position of the bit
 *
 *Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
