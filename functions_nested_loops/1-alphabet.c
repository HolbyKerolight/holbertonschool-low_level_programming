/**
*function 
*
*Return: Nothing
*/
#include "main.h"

void print_alphabet(void)
{
	int lettre;

	for (lettre = 97; lettre <= 122; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
}
