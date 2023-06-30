/**
 * _strncpy - function that copies a string
 *
 * @dest : une chaine de caractere
 * @src : deuxieme chaine
 * @n : bytes from src
 *
 * Return: copies of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
