#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char s;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
