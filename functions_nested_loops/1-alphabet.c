/**
*print_alphabet - prints the alphabet in lowercase
*This function uses a loop to iterate over the characters
*from 'a' to 'z' and prints each character using _putchar
*It also prints a newline character at the end.
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
