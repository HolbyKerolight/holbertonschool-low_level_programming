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
	int i, j, product = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
			}
			else 
			{
				_putchar('0' + product / 10);
			}
			_putchar('0' + product % 10);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
