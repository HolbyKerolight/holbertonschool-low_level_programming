/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 < 6)
		printf("Last digit of %d is less than 6\n", n);
	else if (n%10 > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else
		printf("Last digit of %d is 0\n", n);
	return (0);
}
