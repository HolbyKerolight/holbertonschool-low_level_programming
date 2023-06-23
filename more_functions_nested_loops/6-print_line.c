/**
*function that draws a straight line in the terminal.
*
* @n: number of line
*
* Return: void
*
*/
#include "main.h"

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
