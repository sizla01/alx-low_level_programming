#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @c: the numb to be comptuted
 *
 * Return: absolute value of 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
