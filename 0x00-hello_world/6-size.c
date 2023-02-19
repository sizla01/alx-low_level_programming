#include <stdio.h>
/**
 * main -a program that ptints sizes of computer
 * Return: 0
 */
int main(void)
{
	char forchar;
	int forint;
	long int forlongint;
	long long int forlonglongint;
	float forfloat;

	printf("Size of a char: %lu byte(s)", sizeof(forchar));
	printf("Size of an int: %lu byte(s)", sizeof(forint));
	printf("Size of a long int: %lu byte(s)", sizeof(forlongint));
	printf("Size of a long long int: %lu byte(s)", sizeof(forlonglongint));
	printf("Size of a float: %lu byte(s)", sizeof(forfloat));
	return (0);
}
