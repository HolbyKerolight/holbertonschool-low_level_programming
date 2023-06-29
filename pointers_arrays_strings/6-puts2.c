/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str : pointer to a char
 *
 * Return: void
 */
#include <stdio.h>

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		printf("%c", str[i]);
	putchar('\n');
}
