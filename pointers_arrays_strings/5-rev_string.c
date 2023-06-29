/**
 * rev_string - function that reverses a string
 *
 * @s : pointer to a char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char temp;

	while (s[length])
		length++;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
