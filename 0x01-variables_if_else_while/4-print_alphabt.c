#include <stdio.h>
/**
 * main - main fuction
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar(i);
	return (0);
}