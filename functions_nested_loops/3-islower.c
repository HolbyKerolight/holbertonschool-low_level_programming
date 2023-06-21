/**
*_islower - checks if a character is lowercase
*@c: the character to check
*
*This function takes an integer c as an argument and
*returns 1 if c is a lowercase letter of the ASCII
*alphabet and 0 otherwise.
*
*Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
