#include <stdio.h>

/**
 * main - Print the number from 0 upto 9.
 *
 * Retutn: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
