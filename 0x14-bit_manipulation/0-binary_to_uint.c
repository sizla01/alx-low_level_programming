#include "stdio.h"
#include "main.h"

/**
 * binary_to_uint - convert binary to decimal.
 * @b: the binary number in string format
 * Description: convert binary to decimal
 * section header: the header of this function is header.h
 * Return: this return the convert number.
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result, base;

	int j;

	result = 0;
	j = 0;
	base = 1;

	if (!b)
		return (0);
	while (*(b + j))

	{
		if (*(b + j) != '0' && *(b + j) != '1')
			return (0);
		j++;
	}
	for (j--; j >= 0; j--)
	{
		if (*(b + j) == '1')
			result = result + base;
		base = base * 2;
	}
	return (result);
}
