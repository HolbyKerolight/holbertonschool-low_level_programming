/**
*print_most_numbers - prinits the numbers, from 0 to 9,
*Followed by a new line except 2 and 4
*
* @void: no parameter declared
*
* Return: void
*
*/
#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
