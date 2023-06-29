/**
 * _atoi - function that convert a string to an integer
 *
 * @s : pointer to a char
 *
 * Return: int
 */
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int cond;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		cond = (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10);
		if (result > INT_MAX / 10 || cond)
		{
			result = (sign == 1) ? INT_MAX : INT_MIN;
			return (result);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}

