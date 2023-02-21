#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to be printed
 *
 * Return: 1 for alphabetic or 0 anything else
 */
int _isalpha(int c)
{
	
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
