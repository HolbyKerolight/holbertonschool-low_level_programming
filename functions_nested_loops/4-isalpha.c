/**
*_isalpha - checks if a character is alphabetic
*@c: the character to check
*
*This function takes an integer c as an argument and
*returns 1 if c is a alphabetic letter of the ASCII
*alphabet and 0 otherwise.
*
*Return: 1 if c is alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
