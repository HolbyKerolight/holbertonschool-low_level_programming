/**
 * _atoi - function that convert a string to an integer
 *
 * @s : pointer to a char
 *
 * Return: int
 */
#include <limits.h>
#include <stdbool.h>

int _atoi(char *s) 
{
	int sign = 1;
	int result = 0;
	bool hasDigits = false;

	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		hasDigits = true;

		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			result = (sign == -1) ? INT_MIN : INT_MAX;
			break;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (hasDigits) ? result * sign : 0;
}
