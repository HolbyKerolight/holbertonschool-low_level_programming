/**
*_isdigit - Checks for a digit (0 throught 9)
*
* @c: the value to check (int)
*
* Return: 1 if c is digit, 0 otherwise
*
*/
#include "main.h"

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
