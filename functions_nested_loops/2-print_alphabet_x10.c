/**
*print_alphabet_x10 - prints the alphabet in lowercase 10 times
*
*This function uses two nested loops to print the alphabet
*in lowercase 10 times. The outer loop iterates 10 times,
*and the inner loop iterates over the characters from 'a'
*to 'z' and prints each character using _putchar. It also
*prints a newline character at the end of each iteration
*of the outer loop
*/
#include "main.h"

void print_alphabet_x10(void)
{
	int lettre, i;

	for (i = 0; i < 10; i++)
	{
		for (lettre = 97; lettre <= 122; lettre++)
		{
			_putchar(lettre);
		}
		_putchar('\n');
	}
}
