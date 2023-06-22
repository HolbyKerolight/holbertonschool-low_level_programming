#include "main.h"

/**
*print_last_digit - function that prints the last digit of a number
*@n: The number to check
*
*Return: Last digit of the number n (int)
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
