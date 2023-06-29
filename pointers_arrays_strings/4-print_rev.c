/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s : pointer to a char
 *
 * Return: void
 */
#include <stdio.h>

void print_rev(char *s)
{
	int length = 0, i = 0;

	while (s[length])
		length++;
	for (i = length - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
