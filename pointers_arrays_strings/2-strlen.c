/**
 * _strlen - function that returns the length of a string
 *
 * @s : pointer to an int
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
