#include "main.h"

/**
*_abs - function that computes the absolute value of an integer.
*@n: The number to check
*
*Return: absolute value of n (int)
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
}
