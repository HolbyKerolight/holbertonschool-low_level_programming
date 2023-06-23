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
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
