/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @a : pointer to a int
 * @n : variable int
 *
 * Return: void
 */
#include <stdio.h>
#include <string.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
	}
	printf("\n");
}
