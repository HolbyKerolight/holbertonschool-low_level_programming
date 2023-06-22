#include "main.h"

/**
*_abs - function that computes the absolute value of an integer.
*@n: The number to check
*
*Return: absolute value of n (int)
*/
#include "main.h"

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1 * (n % 10));
	}
	else if (n > 0)
	{
		n = (n % 10);
	}
	_putchar('0' + n);
	return (n);
}
