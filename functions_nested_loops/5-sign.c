/**
*print_sign - print the sign of a number
*@n: the number to check
*
*This function takes an integer n as an argument and
*returns 1 and pintfs + if n is greater than zero
*Returns 0 and prints 0 if n is zero
*Returns -1 and prints - if n is less than zero
*
*Return: 1 if n is greater than zero,
* Return 0 if n is zero 
* Return -1 if n is less than zero
*/
#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	if else (n == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		_putchar('-');
		return -1;
	}
}
