/**
*print_triangle - function that draws a
*triangle, followed by a new line.
*
* @size: the size
*
* Return: void
*
*/
#include "main.h"

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 0; k < size - i; k++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
