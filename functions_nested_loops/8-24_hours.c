#include "main.h"

/**
*jack_bauer - function that prints every minute of the day of Jack Bauer.
*@void : pas de paramettre
*
*Return: Nothing
*/
#include "main.h"

void jack_bauer (void)
{
	int i,j;
	for (i = 0; i <= 24; i++)
	{
		_putchar('0' + i);
		for (j = 0; j <= 60; j++)
		{
			_putchar(':');
			_putchar('0' + j);
		}
	}
}
