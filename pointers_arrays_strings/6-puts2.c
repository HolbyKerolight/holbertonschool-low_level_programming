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
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
