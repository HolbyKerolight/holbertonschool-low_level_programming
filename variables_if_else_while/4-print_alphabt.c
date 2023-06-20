/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
