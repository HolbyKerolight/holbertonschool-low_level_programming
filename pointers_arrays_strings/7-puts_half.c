/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str : pointer to a char
 *
 * Return: void
 */
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
	int length = strlen(str), n, i;

	n = length / 2;
	if (length % 2 == 1)
		n = (length - 1) / 2;
	for (i = n; i < length; i++)
		putchar(str[i]);
	printf("\n");
}
