#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the value of two interger
 * @a: The first integert to be swapped
 * @b: the second integer to be swapped
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
