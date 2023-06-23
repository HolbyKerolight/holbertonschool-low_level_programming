/**
*print_numbers - prinits the numbers, from 0 to 9,
*Followed by a new line.
*
* @void: no parameter
*
* Return: void
*
*/
#include "main.h"

void print_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar("\n");
}
