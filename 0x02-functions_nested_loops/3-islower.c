#include "main.h"

/**
 * _islower - function that checks for lowercase
 *
 * @c: parameter that prints
 *
 * Return: 1 if it is lower
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
