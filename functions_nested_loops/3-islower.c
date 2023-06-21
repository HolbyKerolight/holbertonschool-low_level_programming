/**
*_islower : function that checks for lowercase character.
*@c: the character
*
*This function takes an integer c as an argument and
*returns 1 if c is a lowercase letter of the ASCII
*
*Return: 1 (lower case) 0 (other)
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
