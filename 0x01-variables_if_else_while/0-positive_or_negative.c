#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>
>>>>>>> 3af7c0c174180601683431c3d1969a6667fe0247

/**
 * main - Print if the number whether it is positive, negative, ot zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
<<<<<<< HEAD
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
=======
		printf("%d is positive\n", n);
>>>>>>> 3af7c0c174180601683431c3d1969a6667fe0247
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
