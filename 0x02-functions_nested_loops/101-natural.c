#include <stdio.h>
/**
 * main - prints the last sum of all mutiples of 3 or 5 upto 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%s\n", z);
	return (0);
}
