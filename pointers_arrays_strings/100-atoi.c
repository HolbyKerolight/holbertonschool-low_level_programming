/**
 * _atoi - function that convert a string to an integer
 *
 * @s : pointer to a char
 *
 * Return: int
 */
#include <stdio.h>
#include <string.h>

int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? - 1 : 1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			return (sign == -1) ? -2147483648 : 2147483648;
		}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	return (sign * result);
}
