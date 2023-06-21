/**
*_islower : function that checks for lowercase character.
*@c: the character
*
*The standard library provides a similar function: islower.
*Run man islower to learn more.
*
*Return: 1 (lower case) 0 (other)
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
