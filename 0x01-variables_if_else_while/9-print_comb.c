#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int s;

	s = 48;
	while (s < 58)
	{
		putchar(s);
		if (s != 57)
		{
			putchar(44);
			putchar(32);
			s++;
		}
		else
		{
			s++;
		}
	}
	putchar('\n');
	return (0);
}
