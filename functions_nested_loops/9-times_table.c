#include "main.h"

/**
*times - function that prints 9 times table, starting with 0.
*@void : pas de paramettre
*
*Return: Nothing
*/
#include "main.h"

void times_table(void)
{
	int i, j, nombre1 = 0, nombre2 = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar('0' + nombre1);
			_putchar(',');
			_putchar(' ');
			nombre1 += nombre2;
		}
		_putchar('\n');
		nombre2++;
	}
}
