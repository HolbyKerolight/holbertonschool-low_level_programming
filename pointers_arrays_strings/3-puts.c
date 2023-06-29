/**
 * _puts - function that prints a string, followed by a
 * new line, to stdout
 *
 * @str : pointer to a char
 *
 * Return: void
 */
#include "main.h"

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
