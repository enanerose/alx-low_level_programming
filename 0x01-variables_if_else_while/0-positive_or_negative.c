#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program entry point
 * Description : A program to determine wether an int is +ve, -ve or 0
 * Return : 0 indicates success
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
		printf(%d is positive\n", n);
	if (n == 0)
		printf(%d is zero\n", n);
	if (n < 0)
		printf(%d is negative\n", n);
	return (0);
}
