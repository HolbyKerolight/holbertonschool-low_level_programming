#include "main.h"

/**
*print_to_98 - function that prints all natural numbers from n to 98, followed by
*A new line
*@n : number to ckeck
*
*Return: void
*/
#include <stdio.h>

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else 
			n--;
	}
	printf("98\n");
}
