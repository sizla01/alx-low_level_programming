#include <stdio.h>
/**
 * main - main ifuction
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", SUM);
	return (0);
}
