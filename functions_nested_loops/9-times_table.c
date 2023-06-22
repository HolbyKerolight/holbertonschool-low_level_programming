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
	int i, j, product = 0, time = 1;

	for (i = 0; i < 10; i++)
	{
		time++;
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (time == 1)
			{
				_putchar(' ' - ' ');
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
			time++;
		}
		_putchar('\n');
	}
}
