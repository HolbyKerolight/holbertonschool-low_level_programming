/**
 * _strcmp - function that copies a string
 *
 * @s1 : une chaine de caractere
 * @s2 : deuxieme chaine
 *
 * Return: copies of string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
