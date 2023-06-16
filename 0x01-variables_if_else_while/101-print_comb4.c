#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 49;
	z = 50;
	while ((x < 56) && (y < 57) && (z < 58))
	{
		putchar(x);
		putchar(y);
		putchar(z);
		if ((x == 55) && (y == 56) && (z == 57))
		{
			putchar('\n');
			x++;
			y++;
			z++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			if (z < 57)
			{
				z++;
			}
			else if ((y < 56) && (z == 57))
			{
				y = 1 + ++y;
			}
			else
			{
				y = ++x + 1;
				z = y + 1;
			}
		}
	}
	return (0);
}
