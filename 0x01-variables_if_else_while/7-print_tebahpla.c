#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; --s)
		putchar(s);
	putchar('\n');

	return (0);
}
