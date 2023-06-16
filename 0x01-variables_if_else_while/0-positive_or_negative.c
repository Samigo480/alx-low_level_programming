#indlude <stdlib.h>
#include <time.h>

/**
 * main - print if n is posetive, zero or negarive
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive \n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);

	return (0);
}
